///*
//	Dijkstra �㷨(ͼ���ڽӱ�ʵ��)��
//				��ʵ���㷨��prim�㷨���ƣ���ͬ�Ľ����Ǹ�����һ��
//				����������Ȼ��Ҫ�õ�һ���������flag,���ڼ�¼�����Ƿ��ѱ����ʣ�һ��·������dist�����ڼ�¼
//				Ŀǰ���������ľ��룬�������ǻ���Ҫһ��ǰ�ö�������prevs�����ڴ洢·��
//
//*/
//#define MAXSIZE 100 //�������ֵ
//#define _CRT_SECURE_NO_WARNINGS
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
//int getWeiFromAtoB(ALGraph *G, int a, int b) {//��ͼ�л�ȡa �� b�ľ��루Ȩֵ��
//	for (EdgeNode *p = G->adjlist[a].firstEdge; p; p = p->next) {
//		if (p->index == b) {//��ֱ�����ӣ�����Ȩֵ
//			return p->weight;
//		}
//	}
//	return 32767;//��û��ֱ�����ӣ��������ֵ
//}
//void dijkstra(ALGraph *G, int start) {
//	int flag[100];//�������
//	int preV=0;//����preV�ʼΪ0
//	int dist[100];//�ɵ��ﶥ��ľ�������
//	int prevs[100];//�洢ÿ�������ǰ����Ҳ���Ǵ洢·��
//	int k = start;
//	for (int i = 0; i < G->numV; i++) {
//		dist[i] = 32767;//������ֵ��Ϊ����
//	}
//	for (EdgeNode *p = G->adjlist[start].firstEdge; p; p = p->next) {
//		dist[p->index] = p->weight;//�ѵ�ǰ���붥����������Ӷ���ıߵ�Ȩֵ����
//	}
//	for (int i = 0; i < G->numV;i++) {
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
//			int weight = getWeiFromAtoB(G, k, m);
//			if (!flag[m]&&dist[m]> weight +dist[k]) {//��ǰ ��¼�Ĵ�Դ�㵽k�ľ��� ���� ����k��ľ��룬���и��£���
//				dist[m] = weight + dist[k];
//				prevs[m] = k;//һ������������m����ֵ��Ϊk��������k���Ķ���ָ��m���Ķ���Ŀǰ�������k��m��ǰ��
//			}
//		}
//	}
//	for (int i = 0; i < G->numV;i++) {
//		printf("%c ",G->adjlist[prevs[i]].info);
//	}
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	dijkstra(G, 0);
//	return 0;
//}