//
///*
//	判断是否存在EL路径
//*/
//
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Graph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//}adjMatrix;
//
//int judgeEL(Graph* g) {
//	int degree, i, j, count = 0;
//	for (i = 0; i < g->numV; i++) {
//		degree = 0;
//		for (j = 0; j < g->numV; j++) {
//			degree += g->Edge[i][j] >=1 && g->Edge[i][j]<32767 ? 1 : 0;//这里进行判断有没有边
//
//		}
//		if (degree % 2 != 0) count++;
//	}
//	if (count == 0 || count == 2) return 1;
//	else return 0;
//}
//int  main() {
//
//	void createGraphFromFile(adjMatrix*);
//	void dispGraph(adjMatrix*);
//	adjMatrix* G = (adjMatrix*)malloc(sizeof(adjMatrix));
//	createGraphFromFile(G);
//	dispGraph(G);
//	judgeEL(G) ? printf("存在EL路径") : printf("不存在EL路径");
//	return 0;
//}