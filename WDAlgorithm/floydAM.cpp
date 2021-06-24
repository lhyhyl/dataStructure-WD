///*
//	floyd算法：
//			我们会设置一个dist数组和path数组，dist数组用于描述i到j的权值，path数组用于描述i到j经过那个顶点
//*/
//#define MAX 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Graph {
//	char vertex[MAX];
//	int numE, numV;
//	int Edge[MAX][MAX];
//}adjMatrix;
//void floyd(adjMatrix *G) {
//	int i, j, k;
//	int dist[MAX][MAX], path[MAX][MAX];
//	for (int m = 0; m < G->numV; m++) {
//		for (int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];//初始化顶点间距离
//			path[m][n] = n;//初始化路径，m n 经过n
//		}
//	}
//	for (k = 0; k < G->numV; k++) {
//		for (i = 0; i < G->numV; i++) {
//			for (j = 0; j < G->numV; j++) {
//				if (G->Edge[i][k] != 32767 && G->Edge[k][j] != 32767&& dist[i][j] > G->Edge[i][k] + G->Edge[k][j]) {//加入k后有更短的，更新
//					dist[i][j] = G->Edge[i][k] + G->Edge[k][j];
//					path[i][j] = path[i][k];
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
//}
//int main() {
//	void createGraphFromFile(adjMatrix *);
//	void dispGraph(adjMatrix *);
//	adjMatrix *G = (adjMatrix *)malloc(sizeof(adjMatrix));
//	createGraphFromFile(G);
//	dispGraph(G);
//	floyd(G);
//	return 0;
//}