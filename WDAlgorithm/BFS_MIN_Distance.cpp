///*
//	���ù�����ȱ�����ⵥԴ���·����
//		������
//			��Ϊ���ڹ�����ȱ�����˵������ÿ�ζ��ǰ��վ����ɽ���Զ������ͼ�е�ÿ�����㣬�������ǿ��Ժ����ɵ�
//			���ĳ���㵽��������ľ���
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//#define TYPE int
//typedef struct EdgeNode {//�߱���
//	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//}EdgeNode;
//
//typedef struct VertexNode {//�����ڵ�
//	TYPE info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//}ALGraph;
////���нṹ(���ǲ���˳�����)
//struct Squeue {
//	TYPE *arr;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//
//void BFS_MIN_Distance(ALGraph *G, int v) {
//	Squeue *createQueue(int);
//	bool isEmpty(Squeue *);
//	bool enQueue(Squeue *, TYPE, int);
//	bool deQueue(Squeue *sq, TYPE *data, int maxSize);
//	Squeue *sq;
//	sq = createQueue(G->numV);//��������
//	int *d = (int *)malloc(sizeof(int)*G->numV);
//	int tmp;
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//���ñ������
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV;i++) {
//		d[i] = 32767;
//	}
//	visited[v] = 1;
//	d[v] = 0;//�Լ����Լ��ľ���Ϊ0
//	enQueue(sq,v,G->numV);//��Դ�����
//	while (!isEmpty(sq)) {//�����в���
//		deQueue(sq,&tmp,G->numV);
//		for (EdgeNode *w = G->adjlist[tmp].firstEdge; w;w=w->next) {
//			if (!visited[w->index]) {
//				d[w->index] = d[tmp] + 1;
//				enQueue(sq, w->index,G->numV);
//			}
//		}
//	}
//}
//int main() {
//	ALGraph *graph = (ALGraph *)malloc(sizeof(ALGraph *));
//	//��������
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//����ͼ
//	createGraphInFile(graph);
//	//��ӡͼ
//	dispGraph(graph);
//	BFS_MIN_Distance(graph, 0);
//	return 0;
//}