///*
//	Dijkstra �㷨��
//				��ʵ���㷨��prim�㷨���ƣ���ͬ�Ľ����Ǹ�����һ��
//				����������Ȼ��Ҫ�õ�һ���������flag,���ڼ�¼�����Ƿ��ѱ����ʣ�һ��·������dist�����ڼ�¼
//				Ŀǰ���������ľ��룬�������ǻ���Ҫһ��ǰ�ö�������prevs�����ڴ洢·��
//
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
//void dijkstra(adjMatrix *G, int start) {
//	int flag[100];//�������
//	int preV=0;//����preV�ʼΪ0
//	int dist[100];//�ɵ��ﶥ��ľ�������
//	int prevs[100];//�洢ÿ�������ǰ����Ҳ���Ǵ洢·��
//	int k = start;
//	for (int i = 0; i < G->numV;i++) {
//		dist[i] = G->Edge[start][i];//��ʼ��start��������ľ���
//		prevs[i] = 0;//��ʼ��
//		flag[i] = 0;
//	}
//	flag[0] = 1;//���붥����Ϊ�ѷ���
//	for (int i = 0; i < G->numV;i++) {//������G->numV��ѭ��
//		if (start == i)//�Ǳ�����������
//			continue;
//		int min = 32767;
//		//��Ŀǰ�ܵ����Ȩֵ��С����
//		for (int j = 0; j < G->numV;j++) {
//			if (!flag[j]&&dist[j]<min) {//dist��Ϊ0����δ���ʹ�
//				min = dist[j];
//				k = j;
//			}
//		}
//		flag[k]=1;
//		//�����Ǽ����¶���ʱ������Ҫ�жϼ����¶�����Ƿ�·�������̣�����������������Ҫ����dist
//		for (int m = 0; m < G->numV; m++) {
//			if (!flag[m]&&dist[m]>G->Edge[k][m]+dist[k]) {//��ǰ ��¼�Ĵ�Դ�㵽k�ľ��� ���� ����k��ľ��룬���и��£���
//				dist[m] = G->Edge[k][m] + dist[k];
//				prevs[m] = k;//һ������������m����ֵ��Ϊk��������k���Ķ���ָ��m���Ķ���Ŀǰ�������k��m��ǰ��
//			}
//		}
//	}
//	for (int i = 0; i < G->numV;i++) {
//		printf("%c ",G->Vertex[prevs[i]]);
//	}
//}
//int main() {
//	void createGraphFromFile(adjMatrix *);
//	void dispGraph(adjMatrix *G);
//	adjMatrix *G = (adjMatrix *)malloc(sizeof(adjMatrix ));
//	createGraphFromFile(G);
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}