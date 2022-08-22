///*
//	floyd算法：
//			我们会设置一个dist数组和path数组，dist数组用于描述i到j的权值，
//			path数组用于描述i到j经过那个顶点
//*/
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Graph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//}adjMatrix;
//void floyd(adjMatrix* G, int path[][MAXSIZE]) {
//	int i, j, k;
//	int dist[MAXSIZE][MAXSIZE];
//	for (int m = 0; m < G->numV; m++) {
//		for (int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];//初始化顶点间距离
//			G->Edge[m][n] == 32767 ? path[m][n] = -1 : path[m][n] = m;//初始化路径
//		}
//	}
//	for (k = 0; k < G->numV; k++) {//依次加入所有的顶点
//		for (i = 0; i < G->numV; i++) {
//			for (j = 0; j < G->numV; j++) {
//				if (dist[i][j] > G->Edge[i][k] + G->Edge[k][j]) {//加入k后有更短的，更新
//					dist[i][j] = G->Edge[i][k] + G->Edge[k][j];//更改dist
//					path[i][j] = k;//path更改
//				}
//			}
//		}
//	}
//	for (int i = 0; i < G->numV; i++)
//	{
//		for (int j = 0; j < G->numV; j++)
//			printf("%2d  ", dist[i][j]);
//		printf("\n");
//	}
//	printf("\n");
//	for (int i = 0; i < G->numV; i++)
//	{
//		for (int j = 0; j < G->numV; j++)
//			printf("%2d  ", path[i][j]);
//		printf("\n");
//	}
//}
//void printPath(int path[][MAXSIZE], int vi, int vj) {
//	static int end = vj;
//	if (path[vi][vj] == vi) {//直接输出
//		vj == end ? printf("%d ", vj + 1) : printf("%d->", vj + 1);//如果序号从1开始，那么结果就加一
//	}
//	else {
//		int mid = path[vi][vj];
//		printPath(path, vi, mid);
//		printPath(path, mid, vj);
//	}
//}
//int main() {
//	void createGraphFromFile(adjMatrix*);
//	void dispGraph(adjMatrix*);
//	adjMatrix* G = (adjMatrix*)malloc(sizeof(adjMatrix));
//	createGraphFromFile(G);
//	dispGraph(G);
//	int path[MAXSIZE][MAXSIZE];
//	floyd(G, path);
//	printPath(path, 1, 3);
//	return 0;
//}