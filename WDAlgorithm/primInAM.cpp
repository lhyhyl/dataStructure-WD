///*
//	prim�㷨�����ڽӾ���ʽ�洢��ͼ�е�ʵ��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100 //�������ֵ
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
//	int prims[MAXSIZE];//�洢��С�������������
//	int lowCost[MAXSIZE];//��ǰ�Ѽ�����С���������ڽӶ���ıߵ�Ȩֵ
//	int min, k, index = 0;
//	lowCost[start] = 0;//�Լ����Լ��ľ���Ϊ0
//	prims[index++] = start;
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = G->Edge[start][i];//�ѵ�ǰ���붥����������Ӷ���ıߵ�Ȩֵ����
//	}
//	for (int i = 0; i < G->numV; i++) {//���б���������һ�μ���һ������
//		if (start == i)
//			continue;
//		min = 32767;
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] != 0 && lowCost[j] < min) {//�����ǰ����δ��������С������С��Ŀǰ��Сֵ������
//				min = lowCost[j];
//				k = j;//��¼λ��
//			}
//
//		}
//		//���ҵ���Сֵ,����prims����
//		prims[index++] = k;
//		lowCost[k] = 0;//����k��������Ϊ�ѷ��ʣ����������Ѽ�����С������
//		//���ж���δ��������������lowCost����
//		for (int j = 0; j < G->numV; j++) {
//			if (lowCost[j] && G->Edge[k][j] < lowCost[j]) {
//				lowCost[j] = G->Edge[k][j];
//				/*
//					�����������⣬ΪʲôҪ�滻��Ȼ��Ϊʲô���������滻��
//					���Ȼش��һ������Ϊ����ķ�㷨��ÿ�θ������Ǽ���ĵ�ȥѰ��Ŀǰ���������С�ߣ�
//									��������û����һ�����㶼Ҫ�����жϣ�����Ķ����Ƿ���ĳЩ�����
//									�ɴ������
//					�ڶ������⣺    ����ÿ��ȷ��һ�����㣬Ҳ����ζ��һ����Ҳȷ�������������Դ�ʱ�¼��붥��
//									�����ඥ��ľ�����С��֮ǰ�ľ��룬����Ҫ���и���
//									��������� 1 2 3����1 3 ȷ����1 3 �ߵ�ȨֵΪ1�����ǵ�Ŀ����������Ȩֵ
//									��С������֪��֮ǰ1��2ȨֵΪ6����Ȩֵ��Ϊ1 + 6 = 7������ʱ3 �� 2��Ϊ5 
//									С�� 6������Ҫ���и����滻��
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