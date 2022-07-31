///*
//	prim算法(采用邻接表)：
//		算法核心：
//				根据邻接矩阵改编！！
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define TYPE int
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
//
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//在图中获取a 到 b的距离（权值）
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//有直接连接，返回权值
//			return p->weight;
//		}
//	}
//	return 32767;//若没有直接连接，返回最大值
//}
//int getSum(ALGraph *G, int *prims) {//获得最小生成树的权值
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (getWeiFromAtoB(G, prims[j], prims[i]) < min) {
//				min = getWeiFromAtoB(G, prims[j], prims[i]);
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(ALGraph *G, int start) {
//	int prims[MAXSIZE];//存储最小生成树结果数组
//	int lowCost[MAXSIZE];//当前已加入最小生成树的邻接顶点的权值
//	int min, k, index = 0, weight;
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = 32767;//把所有值设为无穷
//	}
//	for (EdgeNode *p = G->adjlist[start].firstEdge; p; p = p->next) {
//		lowCost[p->index] = p->weight;//把当前传入顶点的所有连接顶点的边的权值存入
//	}
//	lowCost[start] = 0;//自己到自己的距离为0
//	prims[index++] = start;
//	for (int i = 0; i < G->numV; i++) {//进行顶点数轮的循环，每次循环加入一个顶点
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
//			weight = getWeiFromAtoB(G, k, j);
//			if (lowCost[j] && weight < lowCost[j]) {//在j处的旧值大于我们加入新节点后的
//				lowCost[j] = weight;
//			}
//		}
//	}
//	printf("%d ", getSum(G, prims));
//	for (int i = 0; i < G->numV; i++) {
//		printf("%c ", G->adjlist[prims[i]]);
//	}
//
//}
//
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	prim(G, 0);
//	return 0;
//}