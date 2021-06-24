///*
//	��������
//			ÿ�ν����Ϊ0�Ķ�������������ͬʱ������ɾ����ֱ�����ж������
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//typedef struct EdgeNode {//�߱���
//	int index;//�ñ���ָ��Ķ����λ��
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//}EdgeNode;
//
//typedef struct VertexNode {//�����ڵ�
//	char info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//}ALGraph;
//struct Stack
//{
//	int* arr;	//�ڴ��׵�ַ
//	int  len;	//ջ������
//	int top; 	//ջ���±�
//};
//#include <stdio.h>
//#include <stdlib.h>
//
//void inDegree(ALGraph *G,int *indegree) {//ͳ��ÿ���������ȣ������鱣��
//	int k;
//	for (int i = 0; i < G->numV;i++) {
//		k = 0;
//		for (int j = 0; j < G->numV;j++) {
//			/*if (i==j) {
//				continue;
//			}*/
//			for (EdgeNode *p = G->adjlist[j].firstEdge; p;p=p->next) {
//				if (p->index == i)
//					indegree[i] = ++k;
//			}
//		}
//
//	}
//}
//void topSort(ALGraph *G) {
//	Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
//	Stack *createStack(int );
//	bool push(Stack *, int data);
//	bool empty(Stack *);
//	int top(Stack *);
//	bool pop(Stack *);
//	int *indegree = (int *)malloc(sizeof(int )*G->numV);
//	for (int i = 0; i < G->numV;i++) {
//		indegree[i] = 0;
//	}
//	int index;
//	inDegree(G,indegree);
//	s=createStack(G->numV);
//	for (int i = 0; i < G->numV;i++) {//�����Ϊ0�Ķ�����ջ
//		if (indegree[i]==0) {
//			push(s,i);
//		}
//	}
//	while (!empty(s)) {//ջ���գ����ջ��
//		index = top(s);//�鿴ջ��Ԫ��
//		printf("%c ", G->adjlist[index].info);//��ӡ
//		pop(s);//��ջ
//		for (EdgeNode *p = G->adjlist[index].firstEdge; p; p = p->next) {//����ǰ��ջ�Ķ�����ָ��Ķ������Ⱦ�-1
//			indegree[p->index]--;
//			if (!indegree[p->index]) {//���������Ϊ0����ջ
//				push(s,p->index);
//			}
//		}
//
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph *));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	topSort(G);
//	return 0;
//}