///*
//	prim�㷨���þ���ʽ�洢��ͼ�е�ʵ��
//*/
//#define MAXSIZE 100 //�������ֵ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct Graph {
//	char Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//���㡢������
//}adjMatrix;
//void outPut(adjMatrix *G, int **weights) {//�����С������
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->Edge[i], G->Edge[j], G->Edge[i][j]);
//			}
//		}
//	}
//}
//void prim(adjMatrix *G, int start) {
//	int *prims = (int *)malloc(sizeof(int)*G->numV);//������СΪͼ������������飬���ڴ洢���μ���Ķ���
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//������Ȩֵ����
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int *)*G->numV);
//	}
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = 0; j < G->numV; j++) {
//			if (i == j) {
//				weights[i][j] = 32767;//��ʼ���ö�λ����
//
//			}
//			else {
//				weights[i][j] = 0;//��ʼ���ö�λ����
//
//			}
//		}
//	}
//	int weight = 32767;//Ȩֵ����
//	int index = 0;
//	int s,r;//��¼��ǰ�ҵ�����С�ߵ���ʼ������յ�
//	prims[index++] = start;//�Ƚ�start����prims����
//	while (index != G->numV) {//����δȫ������prims���飬��������
//		for (int i = 0; i < index; i++) {//��prims�����е�ֵΪ�������С��
//			for (int j = 0; i < G->numV; j++) {
//				if (i!=j&&weight < G->Edge[i][j] && weights[i][j]== 32767) {
//					weight = G->Edge[i][j];
//					s = i;
//					r = j;
//				}
//			}
//		}
//		//�ҵ���̱ߺ󣬼���prims���飬����weights����
//		prims[index++] = s;
//		weights[s][r] = G->Edge[s][r];
//		weights[r][s] = G->Edge[s][r];
//		weight = 32767;//������Ϊ���ֵ
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