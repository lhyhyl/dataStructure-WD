///*
//	利用广度优先遍历求解单源最短路径：
//		分析：
//			因为对于广度优先遍历来说，我们每次都是按照距离由近到远来遍历图中的每个顶点，所以我们可以很轻松的
//			求得某顶点到其他顶点的距离
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//#define TYPE int
//typedef struct EdgeNode {//边表结点
//	int index;//该边所指向的顶点的位置,在顶点数组里面的位置信息
//	int weight;//权值
//	EdgeNode *next;//下一个邻接边
//}EdgeNode;
//
//typedef struct VertexNode {//顶点表节点
//	TYPE info;//顶点信息
//	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数、顶点数
//}ALGraph;
////队列结构(我们采用顺序队列)
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
//	sq = createQueue(G->numV);//创建队列
//	int *d = (int *)malloc(sizeof(int)*G->numV);
//	int tmp;
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//设置标记数组
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV;i++) {
//		d[i] = 32767;
//	}
//	visited[v] = 1;
//	d[v] = 0;//自己到自己的距离为0
//	enQueue(sq,v,G->numV);//将源点入队
//	while (!isEmpty(sq)) {//若队列不空
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
//	//声明函数
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//创建图
//	createGraphInFile(graph);
//	//打印图
//	dispGraph(graph);
//	BFS_MIN_Distance(graph, 0);
//	return 0;
//}