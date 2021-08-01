/*
	ʹ���ڽӾ�����ͼ
	������
		��Ȼͼ������������ݽṹ�ϸ��ӣ���Ҳ��ʮ���׶��ģ�����ʹ���ڽӾ���洢��ͼ��˵����������Ҫ֪����������
		ͼ�Ķ���������������һ����ά����洢�ı���ߵ���ϵ����Ȩֵ��δ���ӵı�����Ҫʹ�������ʾ���ڵ�������0
		��ʾ����ʼʱ������ڵ������ʾΪ����������ǻ���Ҫһ��һά���������洢���ǵĶ������
*/
#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 100 //�������ֵ
#include <stdio.h>
#include <stdlib.h>
typedef struct Graph {
	char Vertex[MAXSIZE];
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//���㡢������
}adjMatrix;

void createGraph(adjMatrix *G) {
	int v, e, vi, vj, w;
	printf("�����봴����ͼ�Ķ�����߸������Կո�ֿ�����");
	scanf("%d %d", &v, &e);
	G->numE = e;
	G->numV = v;
	//��ʼ��ͼ
	for (int i = 0; i < v; i++) {
		for (int j = 0; j < v; j++) {
			i == j ? G->Edge[i][j] = 0 : G->Edge[i][j] = 32767;
		}
	}
	//�������������
	for (int i = 0; i < G->numV; i++) {
		printf("�������%d���ڵ���Ϣ��", i + 1);
		scanf("\n%c", &G->Vertex[i]);
	}
	//��ʼ��������ߵĹ�ϵ
	for (int i = 0; i < G->numE; i++) {
		printf("������ߵ���Ϣvi vj w(�Կո�ֿ�)");
		scanf("%d %d %d", &vi, &vj, &w);//��Ȩֵ��д
		G->Edge[vi - 1][vj - 1] = w;//��
		//G->Edge[vj - 1][vi - 1] = w;//��   ���������ͼ
	}

}
void createGraphFromFile(adjMatrix *G) {
	FILE *fp;//�����ļ�ָ��
	char ev[4] = { 0 };//���㣬�߸�����Ϣ
	char arc[6] = { 0 };//����Ϣ
	char *vertex;//������Ϣ������
	fp = fopen("graph.txt", "r");//���ļ�
	if (fp == NULL) {
		printf("���ļ��޷��򿪣�");
		return;
	}
	fgets(ev, 4, fp);//��ȡ��һ��
	//G->numE = atoi(&ev[0]);//��Ϊ�пո���������ȡֵ
	G->numE = (int)ev[0] - 48;//��Ϊ�пո���������ȡֵ
	//G->numV = atoi(&ev[2]);//��atoi()���ַ�������ת��Ϊ����
	G->numV = (int)ev[2] - 48;//��Ϊ�пո���������ȡֵ

	//��ʼ��ͼ
	for (int i = 0; i < G->numV; i++) {
		for (int j = 0; j < G->numV; j++) {
			i == j ? G->Edge[i][j] = 0 : G->Edge[i][j] = 32767;
		}
	}
	vertex = (char *)malloc(sizeof(char*)*G->numV);//���������洢������Ϣ�����飨��������֣�
	for (int i = 0; i <= G->numE; i++) {//��ʼ��ȡ�������Ϣ
		if (i == 0) {//��ʱ�����������ļ��Ľṹ���ڶ����Ƕ�����Ϣ
			fgets(ev, 4, fp);//��ȡ�س�������һ��fgets���ͣ�ڻس����Ƕ�
			fgets(vertex, G->numV * 2, fp);//�����ȡ������Ϣ
			int w = 0;//��һ������������֤adjlist���δ洢����
			for (int j = 0; j < G->numV * 2; j++) {//��Ϊ�пո�������j<G->numV*2
				if (vertex[j] == 32) {//�ǿո񣬲����в���
					continue;
				}
				else {//��ʼ��ֵ
					G->Vertex[w] = vertex[j];
					w++;
				}
			}
		}
		else {//��ʼ���δ洢����Ϣ
			fgets(ev, 4, fp);//ͬ���ȳԵ����з�
			fgets(arc, 6, fp);//��ȡ���еı���Ϣ
			G->Edge[(int)arc[0] - 48 - 1][(int)arc[2] - 48 - 1] = (int)arc[4] - 48;
		}

	}
	fclose(fp);

}
void dispGraph(adjMatrix *G) {
	int i, j;
	printf("\n����������Ϣ���ַ���:\n");
	for (i = 0; i < G->numV; i++)
		printf("%8c", G->Vertex[i]);

	printf("\n����ڽӾ���:\n");
	printf("\t");
	for (i = 0; i < G->numV; i++)
		printf("%8c", G->Vertex[i]);

	for (i = 0; i < G->numV; i++)
	{
		printf("\n%8c", G->Vertex[i]);
		for (j = 0; j < G->numV; j++)
		{
			if (G->Edge[i][j] == 32767)
				//����֮��������ʱȨֵΪĬ�ϵ�32767��
				//������ͼ��һ����"0"��ʾ��������ͼ��һ����"��",
				//����Ϊ�˷���ͳһ��� "��"
				printf("%8s", "��");
			else
				printf("%8d", G->Edge[i][j]);
		}
		printf("\n");
	}

}
//int main() {
//	adjMatrix G;
//	createGraphFromFile(&G);
//	dispGraph(&G);
//}