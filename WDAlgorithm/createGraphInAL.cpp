/*
	�����ڽӱ�ķ�ʽ�洢ͼ
	������
		�����ڽӱ�������ڽӾ�����˵����ʡ�洢�ռ䣬����������Ҫ�������ݽṹ��
		�ٶ����ṹ������������Ϣ��ָ���һ���ڽӵ��ͷָ��
		�ڱ߱�ṹ���������ڽӵ����������е��±꣩��Ȩֵ����һ���ڽӵ�ָ��
		��һ�����飬���ڴ洢���ж��㣬��Ϊ���������洢���ԣ��������ǲ���
		��ͼ�ṹ�������������鼰������������
		���崴�����̣�
				����������Ҫ����ͼ�Ķ������ͱ������������ͼ�ṹ�У���������Ķ������������붥����Ϣ��������һ���ڽӵ��ͷָ��
			��λNULL�����ǽ������������̣�
				���������Ҫ�����߱���������ı߸�������������ߣ�vi��vj���Ķ�����ţ��ٲ�ȡͷ�巨���в��룬��������ͼ����Ҫ
			�ظ������������ã����ˣ�ͼ���ڽӱ�ṹ������ɡ�

*/
#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 100
#define TYPE int
typedef struct EdgeNode {//�߱���
	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
	int weight;//Ȩֵ
	EdgeNode *next;//��һ���ڽӱ�
}EdgeNode;

typedef struct VertexNode {//�����ڵ�
	TYPE info;//������Ϣ
	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
}VertexNode, Adjlist[MAXSIZE];

typedef struct {
	Adjlist adjlist;//��������
	int numE, numV;//������������
}ALGraph;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void createGraph(ALGraph *G) {
	int e, v, vi, vj, w;
	printf("������ͼ�ı������������Կո�ֿ�����");
	scanf("\n%d %d", &e, &v);
	G->numE = e;
	G->numV = v;
	printf("���������붥����Ϣ��\n");
	for (int i = 0; i < G->numV; i++) {
		printf("�������%d�������Ϣ��", i + 1);
		scanf("\n%c", &G->adjlist[i].info);
		G->adjlist[i].firstEdge = NULL;
		//G->adjlist[i].firstEdge->index = -1;
	}

	printf("������߱���Ϣ��\n");
	for (int i = 0; i < G->numE; i++) {
		printf("������ߣ�vi��vj���Ķ�����ż���Ȩֵ���Կո�ֿ�����");
		scanf("%d %d %d", &vi, &vj, &w);
		//��������ͼ����Ҫ����������в���,����ͷ�巨
		EdgeNode *e = (EdgeNode *)malloc(sizeof(EdgeNode ));
		e->index = vj - 1;//�����±�Ҫ��һ
		e->weight = w;
		e->next = G->adjlist[vi - 1].firstEdge;
		G->adjlist[vi - 1].firstEdge = e;

		/*EdgeNode *ed = (EdgeNode *)malloc(sizeof(EdgeNode ));
		ed->index = vi - 1;
		ed->weight = w;
		ed->next = G->adjlist[vj - 1].firstEdge;
		G->adjlist[vj - 1].firstEdge = ed;*/
	}

}
void createGraphInFile(ALGraph *G) {//���ļ��ж�ȡ���ǵ�ͼ�����ݣ������������ڵ�������Ӧ��ϵ
	FILE *fp;//�����ļ�ָ��
	char ev[4] = {};
	char numE[3] = { 0 };//���㣬�߸�����Ϣ
	char numV[3] = { 0 };//���㣬�߸�����Ϣ
	char arc[10] = { 0 };//����Ϣ
	char *vertex;//������Ϣ������
	fp = fopen("graphAL.txt", "r");//���ļ�
	if (fp == NULL) {
		printf("���ļ��޷��򿪣�");
		return;
	}
	fscanf(fp, "%hu %hu", numE, numV);//��ȡ��һ��
	G->numE = numE[0];
	G->numV = numV[0];
	vertex = (char *)malloc(sizeof(char)*G->numV);//���������洢������Ϣ�����飨��������֣�
	for (int i = 0; i <= G->numE; i++) {//��ʼ��ȡ�������Ϣ
		if (i == 0) {//��ʱ�����������ļ��Ľṹ���ڶ����Ƕ�����Ϣ
			fgets(ev, 4, fp);//��ȡ�س�������һ��fgets���ͣ�ڻس����Ƕ�
			fgets(vertex,G->numV*2,fp);//�����ȡ������Ϣ
			int w = 0;//��һ������������֤adjlist���δ洢����
			for (int j = 0; j < G->numV*2;j++) {//��Ϊ�пո�������j<G->numV*2
				if (vertex[j]==32) {//�ǿո񣬲����в���
					continue;
				}
				else {//��ʼ��ֵ
					G->adjlist[w].info = vertex[j];
					G->adjlist[w].firstEdge = NULL;
					w++;
				}
			}
		}
		else {//��ʼ���δ洢����Ϣ
			fgets(arc, 16, fp);//��ȡ���еı���Ϣ
			if (arc[0] == 10) fgets(arc, 16, fp);//�����"/n"����ȡ����һ��
			char* start = strtok(arc, " ");//��ȡstart
			char* end = NULL, * weight = NULL;
			if (start) end = strtok(NULL, " ");//��ȡend
			if (end) weight = strtok(NULL, " ");//��ȡweight
			weight[strlen(weight) - 1] = ' ';//�����з��滻Ϊ����
			weight = strtok(weight, " ");//��ȡweightֵ

			EdgeNode *e = (EdgeNode*)malloc(sizeof(EdgeNode));
			e->index = atoi(end) - 1;//��ǰ�ڵ���ָ��Ľڵ��±꣬�����±�Ҫ��һ
			e->weight = atoi(weight);//�ַ���ת��Ϊ��������
			e->next = G->adjlist[atoi(start) - 1].firstEdge;//����ͷ�巨
			G->adjlist[atoi(start) - 1].firstEdge = e;
			
			//�������������ƣ�Ŀ�����ڹ�������ͼ
			EdgeNode *otherE = (EdgeNode *)malloc(sizeof( EdgeNode ));
			otherE->index = atoi(start) - 1;//�����±�Ҫ��һ
			otherE->weight = atoi(weight);
			otherE->next = G->adjlist[atoi(end) - 1].firstEdge;
			G->adjlist[atoi(end) - 1].firstEdge = otherE;
		}

	}
	fclose(fp);
}
void dispGraph(ALGraph *G) {//��ͼ���ڽӱ����ʽչʾ����
	for (int i = 0; i < G->numV; i++) {
		int j = i;
		printf("%c-->", G->adjlist[j].info);
		EdgeNode *p = G->adjlist[j].firstEdge;
		while (p) {
			printf("(%d)%c-->", p->weight, G->adjlist[p->index].info);
			p = p->next;
		}
		printf("^\n");
	}

}
//int main() {
//	ALGraph G;
//	createGraphInFile(&G);
//	dispGraph(&G);
//	return 0;
//}