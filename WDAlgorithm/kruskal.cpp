///*
//	kruskal �㷨��ÿ��ѡ����̵�һ���߼��뼯�ϣ�ֱ�����ж��㱻���������һ��õ����鼯
//*/
//#include<stdio.h>
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
//struct Tree {
//	char data;
//	struct Tree *lchild, *rchild;
//};
//void outPut(ALGraph *G, int **weights) {//�����С������
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j] != 0) {
//				printf("%c->%c(%d)\n", G->adjlist[i].info, G->adjlist[j].info, weights[i][j]);
//			}
//		}
//	}
//}
//int findAnster(int *fa, int i) {
//	if (fa[i] == i)return i;//�ҵ�����
//	else {
//		fa[i] = findAnster(fa, fa[i]);//����·��ѹ��,����i��
//		return fa[i];//δ�ҵ�����
//	}
//}
//void unionn(int *fa, int i, int j) {
//	int i_a = findAnster(fa, i);
//	int j_a = findAnster(fa, j);
//	fa[i_a] = j_a;//i������ָ��j������
//}
//void kruskal(ALGraph *G) {
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//������Ȩֵ����
//	int *fa = (int *)malloc(sizeof(int)*G->numV);//���鼯����
//	for (int i = 0; i < G->numV; i++) {
//		fa[i] = i;//�ʼ��ÿ���ڵ����������Ϊ�Լ�
//	}
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int)*G->numV);
//	}
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = 0; j < G->numV; j++) {
//			weights[i][j] = 0;//��ʼ���ö�λ����
//		}
//	}
//	int edges = 0;
//	while (edges < G->numV - 1) {
//		int weight = 32767;
//		int start, end;
//		for (int i = 0; i < G->numV; i++) {//����ÿһ����������б�
//			for (EdgeNode *p = G->adjlist[i].firstEdge; p; p = p->next) {
//				//Ѱ����̱�
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
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	kruskal(G);
//	return 0;
//}