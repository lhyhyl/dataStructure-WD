///*
//	floyd�㷨��
//			���ǻ�����һ��dist�����path���飬dist������������i��j��Ȩֵ��
//			path������������i��j�����Ǹ�����
//*/
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Graph {
//	int Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//}adjMatrix;
//void floyd(adjMatrix* G, int path[][MAXSIZE]) {
//	int i, j, k;
//	int dist[MAXSIZE][MAXSIZE];
//	for (int m = 0; m < G->numV; m++) {
//		for (int n = 0; n < G->numV; n++) {
//			dist[m][n] = G->Edge[m][n];//��ʼ����������
//			G->Edge[m][n] == 32767 ? path[m][n] = -1 : path[m][n] = m;//��ʼ��·��
//		}
//	}
//	for (k = 0; k < G->numV; k++) {//���μ������еĶ���
//		for (i = 0; i < G->numV; i++) {
//			for (j = 0; j < G->numV; j++) {
//				if (dist[i][j] > G->Edge[i][k] + G->Edge[k][j]) {//����k���и��̵ģ�����
//					dist[i][j] = G->Edge[i][k] + G->Edge[k][j];//����dist
//					path[i][j] = k;//path����
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
//	if (path[vi][vj] == vi) {//ֱ�����
//		vj == end ? printf("%d ", vj + 1) : printf("%d->", vj + 1);//�����Ŵ�1��ʼ����ô����ͼ�һ
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