///*
//	kruskal 算法：每次选择最短的一条边加入集合，直至所有顶点被包含，而且会用到并查集
//*/
//#include<stdio.h>
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
//struct Tree {
//	char data;
//	struct Tree *lchild, *rchild;
//};
//void outPut(ALGraph *G, int **weights) {//输出最小生成树
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->adjlist[i].info, G->adjlist[j].info, weights[i][j]);
//			}
//		}
//	}
//}
//int findAnster(int *fa, int i) {
//	if (fa[i] == i)return i;//找到返回
//	else {
//		fa[i] = findAnster(fa, fa[i]);//进行路径压缩,即将i处
//		return fa[i];//未找到继续
//	}
//}
//void unionn(int *fa, int i, int j) {
//	int i_a = findAnster(fa, i);
//	int j_a = findAnster(fa, j);
//	fa[i_a] = j_a;//i的祖先指向j的祖先
//}
//void kruskal(ALGraph *G) {
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//两点间的权值数据
//	int *fa = (int *)malloc(sizeof(int)*G->numV);//并查集数组
//	for (int i = 0; i < G->numV; i++) {
//		fa[i] = i;//最开始将每个节点的祖先设置为自己
//	}
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int)*G->numV);
//	}
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = 0; j < G->numV; j++) {
//			weights[i][j] = 0;//初始化该二位数组
//		}
//	}
//	int edges = 0;
//	while (edges < G->numV - 1) {
//		int weight = 32767;
//		int start, end;
//		for (int i = 0; i < G->numV; i++) {//遍历每一个顶点的所有边
//			for (EdgeNode *p = G->adjlist[i].firstEdge; p; p = p->next) {
//				//寻找最短边
//				if (p->weight < weight && findAnster(fa, i) != findAnster(fa, p->index)) {
//					weight = p->weight;
//					start = i;
//					end = p->index;
//				}
//			}
//		}
//		unionn(fa, start, end);
//		weights[start][end] = weight;
//		weights[end][start] = weight;
//		edges++;
//	}
//	outPut(G, weights);
//
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	dispGraph(G);
//	kruskal(G);
//	return 0;
//}