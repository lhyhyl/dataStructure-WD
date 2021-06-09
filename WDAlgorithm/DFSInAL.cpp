/*
	在采用邻接表存储的图上进行广度优先遍历/深度优先遍历
	分析：我们知道邻接表上的顶点所连接的节点都是它的相邻节点，而对于广度优先遍历来说，类似于层次遍历，就是要把所有的邻接点进行访问，
		  所以我们需要从第一个节点开始访问它的所有邻接点，还有需要注意的是，当我们把邻接点访问后，需要依次访问邻接点的邻接点，这就需要
		  用队列将我们访问过得邻接点入队，这和层次遍历一样，也只有这样，我们才能访问所有的节点。当然，在这个过程中，会有重复访问的情况，
		  所以我们需要用一个数组来记录节点的访问情况，已访问置true

		  对于深度优先遍历，顾名思义，我们会把每一个节点“榨干”，“顺藤摸瓜”，同样我们需要一个访问标记数组，而对于深度优先遍历，
		  我们将采用递归的方式来进行。
*/
//创建邻接表图结构  分为边表节点结构 顶点表节点结构 图结构

//#define MAXSIZE 100
//#define TYPE int
////边表结构 
//struct EdgeNode {
//	int index;//在数组中的下标
//	int weight;//权值
//	EdgeNode *next;//下一个邻接点
//};
////顶点表节点结构
//typedef struct VertexNode {
//	char info;//节点信息
//	EdgeNode *firstNode;//第一个邻接节点
//}Adjlist[MAXSIZE];
//
////图结构
//struct ALGraph {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数，顶点数
//};
//
////队列结构(我们采用顺序队列)
//struct Squeue {
//	TYPE *arr;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void BFS(ALGraph *G) {//开始广度遍历
//	//声明有关队列的函数
//	Squeue *createQueue(int);
//	bool isEmpty(Squeue *);
//	bool enQueue(Squeue *, TYPE, int);
//	bool deQueue(Squeue *sq, TYPE *data, int maxSize);
//	//设置一个标志数组，用于标志节点是否被访问 初始化0,1代表已访问
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//
//	Squeue *sq;
//	sq = createQueue(G->numV);//创建队列
//	//从第一个节点开始遍历
//	for (int i = 0; i < G->numV; i++) {
//		if (!visited[i]) {//如果没有被访问，便进行访问
//			printf("%c ", G->adjlist[i].info);//我们这里进行简单的打印代表访问
//			visited[i] = 1;//置为已访问
//			enQueue(sq, G->adjlist[G->numV].info, G->numV);//入队
//
//			while (!isEmpty(sq)) {//队列不空，取出队首元素，进行访问
//				TYPE top;
//				deQueue(sq, &top, G->numV);
//				if (!visited[top]) {
//					visited[top] = 1;
//					printf("%c ", G->adjlist[top].info);
//
//					for (EdgeNode *w = G->adjlist[top].firstNode; w; w = w->next) {//依次将当前节点的边表入队，和层次遍历一致
//						if (!visited[w->index])
//							enQueue(sq, w->index, G->numV);
//
//					}
//				}
//
//			}
//
//		}
//	}
//
//}
//void DFSBegin(ALGraph *G) {
//	void DFS(ALGraph *, int *, VertexNode *, int);
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//设置标记数组
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV; i++) {//从第一个节点开始“顺藤摸瓜”
//		if (!visited[i]) {
//			DFS(G, visited, &G->adjlist[i], i);
//		}
//	}
//}
//void DFS(ALGraph *G, int *visited, VertexNode *v, int index) {
//	printf("%c ", v->info);//打印传入的节点
//	visited[index] = 1;//置访问为1
//	if (v->firstNode) {//如果有邻接点，传入DFS
//		if (!visited[v->firstNode->index]) {
//			DFS(G, visited, &G->adjlist[v->firstNode->index], v->firstNode->index);
//		}
//	}
//}
//int main() {
//	ALGraph *graph = (ALGraph *)malloc(sizeof(ALGraph *));
//	//声明函数
//	void createGraph(ALGraph *);
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//创建图
//	createGraphInFile(graph);
//	//打印图
//	dispGraph(graph);
//	//广度优先遍历
//	//BFS(graph);
//	//深度优先遍历
//	DFSBegin(graph);
//	return 0;
//}