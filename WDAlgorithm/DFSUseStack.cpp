///*
//	д��������ȱ����ķǵݹ��㷨��ͼ���ڽӱ������
//	������
//		֮ǰ����Ҳ������һ���ݹ��㷨����ջ�÷ǵݹ�ķ�ʽ�����������ͬ����������ջ������������ȱ���
//		�㷨���̴������£��ӵ�һ�����㿪ʼ����������ȱ�����ͬʱ�÷���λΪtrue��Ȼ�󽫸ö�����ջ��
//		����whileѭ��������ȡ��ջ��Ԫ�أ����жϸö���Ԫ���Ƿ��ѷ��ʣ�δ��������ʣ�
//		�ѷ�����鿴����firstEdge����firstEdgeҲ�������ˣ��鿴next�����ѭ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//struct Stack {//ջ�ṹ
//	int *arr;
//	int len;
//	int top;
//};
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
//void DFSUseStack(ALGraph *G, Stack *s) {
//	bool push(Stack *, int);
//	bool pop(Stack *);
//	int top(Stack *);
//	bool empty(Stack *);
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//���ñ������
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV; i++) {
//		if (visited[i])
//			continue;
//		int v;
//		//printf("%c ", G->adjlist[i].info);
//		visited[i] = 1;
//		push(s, i);//��ջ
//		EdgeNode *p;
//		while (!empty(s)) {//ջ�ڲ���
//			v = top(s);
//			pop(s);
//			//p = G->adjlist[v].firstEdge;
//			//while (p) {
//			//	if (!visited[p->index]) {
//			//		printf("%c ", G->adjlist[p->index].info);
//			//		visited[p->index] = 1;
//			//		push(s, p->index);
//			//		p = G->adjlist[p->index].firstEdge;//˳������
//			//	}
//			//	else {
//			//		p = p->next;//�������ˣ�ƽ�����������
//			//	}
//			//}
//			//if (p == NULL)
//			//	pop(s);
//			printf("%c ", G->adjlist[v].info);
//			for (p = G->adjlist[v].firstEdge; p; p = p->next) {
//				if (!visited[p->index]) {
//					push(s, p->index);
//					visited[p->index] = 1;
//					//p = G->adjlist[p->index].firstEdge;//˳������
//				}
//			}
//		}
//
//	}
//}
//int main() {
//	ALGraph G;
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(&G);//����ͼ
//	dispGraph(&G);
//	Stack *s = (Stack *)malloc(sizeof(Stack));
//	Stack *createStack(int);
//	s = createStack(G.numV);
//	DFSUseStack(&G, s);
//	return 0;
//}