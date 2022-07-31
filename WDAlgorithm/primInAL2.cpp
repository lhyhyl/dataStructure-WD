///*
//	prim�㷨(�����ڽӱ�)��
//		�㷨���ģ�
//				�����ڽӾ���ı࣡��
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define TYPE int
//typedef struct EdgeNode {//�߱���
//	int index;//�ñ���ָ��Ķ����λ��
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//}EdgeNode;
//
//typedef struct VertexNode {//�����ڵ�
//	char info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//}ALGraph;
//
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//��ͼ�л�ȡa �� b�ľ��루Ȩֵ��
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//��ֱ�����ӣ�����Ȩֵ
//			return p->weight;
//		}
//	}
//	return 32767;//��û��ֱ�����ӣ��������ֵ
//}
//int getSum(ALGraph *G, int *prims) {//�����С��������Ȩֵ
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
//	int prims[MAXSIZE];//�洢��С�������������
//	int lowCost[MAXSIZE];//��ǰ�Ѽ�����С���������ڽӶ����Ȩֵ
//	int min, k, index = 0, weight;
//	for (int i = 0; i < G->numV; i++) {
//		lowCost[i] = 32767;//������ֵ��Ϊ����
//	}
//	for (EdgeNode *p = G->adjlist[start].firstEdge; p; p = p->next) {
//		lowCost[p->index] = p->weight;//�ѵ�ǰ���붥����������Ӷ���ıߵ�Ȩֵ����
//	}
//	lowCost[start] = 0;//�Լ����Լ��ľ���Ϊ0
//	prims[index++] = start;
//	for (int i = 0; i < G->numV; i++) {//���ж������ֵ�ѭ����ÿ��ѭ������һ������
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
//			weight = getWeiFromAtoB(G, k, j);
//			if (lowCost[j] && weight < lowCost[j]) {//��j���ľ�ֵ�������Ǽ����½ڵ���
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
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	prim(G, 0);
//	return 0;
//}