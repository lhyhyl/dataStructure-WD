///*
//	拓扑排序：
//			每次将入度为0的顶点输出，输出的同时将出边删除，直至所有顶点输出
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//typedef struct EdgeNode {//边表结点
//	int index;//该边所指向的顶点的位置
//	int weight;//权值
//	EdgeNode *next;//下一个邻接边
//}EdgeNode;
//
//typedef struct VertexNode {//顶点表节点
//	char info;//顶点信息
//	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数、顶点数
//}ALGraph;
//struct Stack
//{
//	int* arr;	//内存首地址
//	int  len;	//栈的容量
//	int top; 	//栈的下标
//};
//#include <stdio.h>
//#include <stdlib.h>
//
//void inDegree(ALGraph *G,int *indegree) {//统计每个顶点的入度，用数组保存
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
//	for (int i = 0; i < G->numV;i++) {//将入度为0的顶点入栈
//		if (indegree[i]==0) {
//			push(s,i);
//		}
//	}
//	while (!empty(s)) {//栈不空，输出栈顶
//		index = top(s);//查看栈顶元素
//		printf("%c ", G->adjlist[index].info);//打印
//		pop(s);//出栈
//		for (EdgeNode *p = G->adjlist[index].firstEdge; p; p = p->next) {//将当前出栈的顶点所指向的顶点的入度均-1
//			indegree[p->index]--;
//			if (!indegree[p->index]) {//出现了入度为0，入栈
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
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	topSort(G);
//	return 0;
//}