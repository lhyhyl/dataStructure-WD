/*
	ʹ���ڽӾ�����ͼ
	������
		��Ȼͼ������������ݽṹ�ϸ��ӣ���Ҳ��ʮ���׶��ģ�����ʹ���ڽӾ���洢��ͼ��˵����������Ҫ֪����������
		ͼ�Ķ���������������һ����ά����洢�ı���ߵ���ϵ����Ȩֵ��δ���ӵı�����Ҫʹ�������ʾ���ڵ�������0
		��ʾ����ʼʱ������ڵ������ʾΪ����������ǻ���Ҫһ��һά���������洢���ǵĶ������
*/
#define MAXSIZE 100 //�������ֵ
typedef struct Graph {
	char Vertex[MAXSIZE];
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//���㡢������
}adjMatrix;
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void createGraph(adjMatrix *G) {
	int v, e,vi,vj,w;
	printf("�����봴����ͼ�Ķ�����߸������Կո�ֿ�����");
	scanf("%d %d",&v,&e);
	G->numE = e;
	G->numV = v;
	//��ʼ��ͼ
	for (int i = 0; i < v;i++) {
		for (int j = 0; j < v;j++) {
			i == j ? G->Edge[i][j] = 0 : G->Edge[i][j] = 32767;
		}
	}
	//�������������
	for (int i = 0; i < G->numV;i++) {
		printf("�������%d���ڵ���Ϣ��",i+1);
		scanf("\n%c",&G->Vertex[i]);
	}
	//��ʼ��������ߵĹ�ϵ
	for (int i = 0; i < G->numE;i++) {
		printf("������ߵ���Ϣvi vj w(�Կո�ֿ�)");
		scanf("%d %d %d",&vi,&vj,&w);//��Ȩֵ��д
		G->Edge[vi - 1][vj - 1] = w;//��
		G->Edge[vj - 1][vi - 1] = w;//��   ���������ͼ
	}

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
//	createGraph(&G);
//	dispGraph(&G);
//}