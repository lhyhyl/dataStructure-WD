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
//
//int getSum(adjMatrix *G, int *prims) {//�����С��������Ȩֵ
//	int sum = 0;
//	for (int i = 1; i < G->numV; i++) {
//		int min = 32767;
//		for (int j = 0; j < i; j++) {
//			if (G->Edge[prims[j]][prims[i]] < min) {
//				min = G->Edge[prims[j]][prims[i]];//���ˣ���prims[j]д����j�����ҵ����˺þã�����
//			}
//		}
//		sum += min;
//	}
//	return sum;
//}
//void prim(adjMatrix *G, int start) {
//	int prims[100];//�洢��С�������������
//	int weights[100];//��ǰ�Ѽ�����С���������ڽӶ����Ȩֵ
//	int min, k, index = 0;
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = G->Edge[start][i];//�ѵ�ǰ���붥����������Ӷ���ıߵ�Ȩֵ����
//	}
//	weights[start] = 0;//�Լ����Լ��ľ���Ϊ0
//	prims[index++] = start;
//
//	for (int i = 0; i < G->numV; i++) {//���б���������һ�μ���һ������
//		if (start == i)
//			continue;
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (weights[j] != 0 && weights[j] < min) {//�����ǰ����δ��������С������С��Ŀǰ��Сֵ������
//				min = weights[j];
//				k = j;//��¼λ��
//			}
//
//		}
//		//���ҵ���Сֵ,����prims����
//		prims[index++] = k;
//		weights[k] = 0;//����k��������Ϊ�ѷ��ʣ����������Ѽ�����С������
//		//���ж���δ��������������weights����
//		for (int j = 0; j < G->numV; j++) {
//			if (weights[j] && G->Edge[k][j] < weights[j]) {//��j���ľ�ֵ�������Ǽ����½ڵ���
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