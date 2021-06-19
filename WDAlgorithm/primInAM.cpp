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
//
//int getSum(adjMatrix *G, int *prims) {//获得最小生成树的权值
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (G->Edge[prims[j]][prims[i]] < min) {
//				min = G->Edge[prims[j]][prims[i]];//疯了，把prims[j]写成了j，害我调试了好久！！！
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(adjMatrix *G, int start) {
//	int prims[100];//存储最小生成树结果数组
//	int weights[100];//当前已加入最小生成树的邻接顶点的权值
//	int min, k, index = 0;
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = G->Edge[start][i];//把当前传入顶点的所有连接顶点的边的权值存入
//	}
//	weights[start] = 0;//自己到自己的距离为0
//	prims[index++] = start;
//
//	for (int i = 0; i < G->numV; i++) {//进行遍历，遍历一次加入一个顶点
//		if (start == i)
//			continue;
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (weights[j] != 0 && weights[j] < min) {//如果当前顶点未曾加入最小树中且小于目前最小值，更新
//				min = weights[j];
//				k = j;//记录位置
//			}
//
//		}
//		//已找到最小值,更新prims数组
//		prims[index++] = k;
//		weights[k] = 0;//将第k个顶点置为已访问，即代表它已加入最小生成树
//		//如有顶点未处理，则看情况需更新weights数组
//		for (int j = 0; j < G->numV; j++) {
//			if (weights[j] && G->Edge[k][j] < weights[j]) {//在j处的旧值大于我们加入新节点后的
//				weights[j] = G->Edge[k][j];
//			}
//		}
//
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->Vertex[prims[i]]);
//	}
//}
//int main() {
//	void createGraph(adjMatrix *);
//	void dispGraph(adjMatrix *G);
//	adjMatrix *G = (adjMatrix *)malloc(sizeof(adjMatrix *));
//	createGraph(G);
//	dispGraph(G);
//	prim(G, 0);
//	return 0;
//}