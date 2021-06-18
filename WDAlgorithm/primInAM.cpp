///*
//	prim算法在用矩阵方式存储的图中的实现
//*/
//#define MAXSIZE 100 //数组最大值
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Graph {
//	char Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//}adjMatrix;
//void outPut(adjMatrix *G, int **weights) {//输出最小生成树
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->Edge[i], G->Edge[j], G->Edge[i][j]);
//			}
//		}
//	}
//}
//void prim(adjMatrix *G, int start) {
//	int *prims = (int *)malloc(sizeof(int)*G->numV);//创建大小为图顶点个数的数组，用于存储依次加入的顶点
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//两点间的权值数据
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int *)*G->numV);
//	}
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = 0; j < G->numV; j++) {
//			if (i == j) {
//				weights[i][j] = 32767;//初始化该二位数组
//
//			}
//			else {
//				weights[i][j] = 0;//初始化该二位数组
//
//			}
//		}
//	}
//	int weight = 32767;//权值数据
//	int index = 0;
//	int s,r;//记录当前找到的最小边的起始顶点和终点
//	prims[index++] = start;//先将start加入prims数组
//	while (index != G->numV) {//顶点未全部加入prims数组，继续遍历
//		for (int i = 0; i < index; i++) {//以prims数组中的值为起点找最小边
//			for (int j = 0; i < G->numV; j++) {
//				if (i!=j&&weight < G->Edge[i][j] && weights[i][j]== 32767) {
//					weight = G->Edge[i][j];
//					s = i;
//					r = j;
//				}
//			}
//		}
//		//找到最短边后，加入prims数组，更新weights数组
//		prims[index++] = s;
//		weights[s][r] = G->Edge[s][r];
//		weights[r][s] = G->Edge[s][r];
//		weight = 32767;//重新置为最大值
//	}
//	outPut(G, weights);
//
//}
//int main() {
//	void createGraph(adjMatrix *);
//	adjMatrix *G = (adjMatrix *)malloc(sizeof(adjMatrix *));
//	createGraph(G);
//	prim(G, 0);
//	return 0;
//}