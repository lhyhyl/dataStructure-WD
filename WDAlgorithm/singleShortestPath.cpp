///*
//	使用BFS（广度优先）寻找单源最短路径，仅适用于无权图
//	算法思想：
//			我们从所给顶点出发，每遍历一次便会知道离起始顶点距离为加1的顶点，直至找到终末顶点
//*/
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct EdgeNode {//边表结点
//	int index;//该边所指向的顶点的位置
//	int weight;//权值
//	EdgeNode *next;//下一个邻接边
//}EdgeNode;
//typedef struct VertexNode {//顶点表节点
//	char info;//顶点信息
//	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
//}VertexNode, Adjlist[MAXSIZE];
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数、顶点数
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
//		result[i] = 32767;//设为无穷
//		visited[i] = 0;
//	}
//	singleShortestPath(G, result, visited, 0);//计算顶点A到各顶点的单源最短路径
//	for (int i = 1; i < G->numV; i++) {
//		printf("%d ", *(result + i));
//	}
//	return 0;
//}