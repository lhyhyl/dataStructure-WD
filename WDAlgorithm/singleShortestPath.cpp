///*
//	ʹ��BFS��������ȣ�Ѱ�ҵ�Դ���·��������������Ȩͼ
//	�㷨˼�룺
//			���Ǵ��������������ÿ����һ�α��֪������ʼ�������Ϊ��1�Ķ��㣬ֱ���ҵ���ĩ����
//*/
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct EdgeNode {//�߱���
//	int index;//�ñ���ָ��Ķ����λ��
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//}EdgeNode;
//typedef struct VertexNode {//�����ڵ�
//	char info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//}VertexNode, Adjlist[MAXSIZE];
//typedef struct {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//}ALGraph;
//struct Squeue {
//	int data;
//	int front;
//	int rear;
//};
//void singleShortestPath(ALGraph *G, int *result, int *visited, int start) {
//	int  data;
//	Squeue *sq;
//	Squeue *createQueue(int);
//	bool enQueue(Squeue *, int, int);
//	bool deQueue(Squeue *, int *, int);
//	bool isEmpty(Squeue *sq);
//	sq = createQueue(G->numV);
//	enQueue(sq, start, G->numV);
//	visited[start] = 1;
//	result[start] = 0;
//	while (!isEmpty(sq)) {
//		deQueue(sq, &data, G->numV);
//		for (EdgeNode *p = G->adjlist[data].firstEdge; p; p = p->next) {
//			if (!visited[p->index]) {
//				result[p->index] = result[data]+1;
//				visited[p->index] = 1;
//				enQueue(sq, p->index, G->numV);
//			}
//		}
//
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph ));
//
//	void createGraphInFile(ALGraph*);
//	createGraphInFile(G);
//	int *result = (int *)malloc(sizeof(int)*G->numV);
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		result[i] = 32767;//��Ϊ����
//		visited[i] = 0;
//	}
//	singleShortestPath(G, result, visited, 0);//���㶥��A��������ĵ�Դ���·��
//	for (int i = 1; i < G->numV; i++) {
//		printf("%d ", *(result + i));
//	}
//	return 0;
//}