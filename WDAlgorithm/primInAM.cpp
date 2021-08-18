///*
//	prim算法在用邻接矩阵方式存储的图中的实现
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100 //数组最大值
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
//	int prims[MAXSIZE];//存储最小生成树结果数组
//	int lowCost[MAXSIZE];//当前已加入最小生成树的邻接顶点的边的权值
//	int min, k, index = 0;
//	lowCost[start] = 0;//自己到自己的距离为0
//	prims[index++] = start;
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = G->Edge[start][i];//把当前传入顶点的所有连接顶点的边的权值存入
//	}
//	for (int i = 0; i < G->numV; i++) {//进行遍历，遍历一次加入一个顶点
//		if (start == i)
//			continue;
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] != 0 && lowCost[j] < min) {//如果当前顶点未曾加入最小树中且小于目前最小值，更新
//				min = lowCost[j];
//				k = j;//记录位置
//			}
//
//		}
//		//已找到最小值,更新prims数组
//		prims[index++] = k;
//		lowCost[k] = 0;//将第k个顶点置为已访问，即代表它已加入最小生成树
//		//如有顶点未处理，则看情况需更新lowCost数组
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] && G->Edge[k][j] < lowCost[j]) {
//				lowCost[j] = G->Edge[k][j];
//				/*
//					对于这里的理解，为什么要替换？然后为什么可以这样替换？
//					首先回答第一个：因为普里姆算法是每次根据我们加入的点去寻找目前可纳入的最小边，
//									所以我们没加入一个顶点都要进行判断，加入的顶点是否让某些顶点的
//									可达距离变短
//					第二个问题：    我们每次确定一个顶点，也就意味着一条边也确定了下来，所以此时新加入顶点
//									到其余顶点的距离若小于之前的距离，则需要进行更换
//									比如这里的 1 2 3，当1 3 确定，1 3 边的权值为1，我们的目标是让最后的权值
//									最小，我们知道之前1到2权值为6，总权值就为1 + 6 = 7，而此时3 到 2仅为5 
//									小于 6，所以要进行更新替换。
//				*/
//			}
//		}
//
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->Vertex[prims[i]]);
//	}
//}
//
//int main() {
//	void createGraphFromFile(adjMatrix *);
//	void dispGraph(adjMatrix *G);
//	adjMatrix *G = (adjMatrix *)malloc(sizeof(adjMatrix));
//	createGraphFromFile(G);
//	dispGraph(G);
//	prim(G, 0);
//	return 0;
//}