///*
//	�ڲ����ڽӱ�洢��ͼ�Ͻ��й�����ȱ���/������ȱ���
//	����������֪���ڽӱ��ϵĶ��������ӵĽڵ㶼���������ڽڵ㣬�����ڹ�����ȱ�����˵�������ڲ�α���������Ҫ�����е��ڽӵ���з��ʣ�
//		  ����������Ҫ�ӵ�һ���ڵ㿪ʼ�������������ڽӵ㣬������Ҫע����ǣ������ǰ��ڽӵ���ʺ���Ҫ���η����ڽӵ���ڽӵ㣬�����Ҫ
//		  �ö��н����Ƿ��ʹ����ڽӵ���ӣ���Ͳ�α���һ����Ҳֻ�����������ǲ��ܷ������еĽڵ㡣��Ȼ������������У������ظ����ʵ������
//		  ����������Ҫ��һ����������¼�ڵ�ķ���������ѷ�����true
//
//		  ����������ȱ���������˼�壬���ǻ��ÿһ���ڵ㡰ե�ɡ�����˳�����ϡ���ͬ��������Ҫһ�����ʱ�����飬������������ȱ�����
//		  ���ǽ����õݹ�ķ�ʽ�����С�
//*/
////�����ڽӱ�ͼ�ṹ  ��Ϊ�߱�ڵ�ṹ �����ڵ�ṹ ͼ�ṹ
//
//#define MAXSIZE 100
//#define TYPE int
////�߱�ṹ 
//typedef struct EdgeNode {//�߱���
//	int index;//�ñ���ָ��Ķ����λ��,�ڶ������������λ����Ϣ
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӱ�
//}EdgeNode;
//
//typedef struct VertexNode {//�����ڵ�
//	int info;//������Ϣ
//	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//}ALGraph;
////���нṹ(���ǲ���˳�����)
//struct Squeue {
//	TYPE *arr;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//
//void DFS(ALGraph *G, int *visited, VertexNode *v,int index,int &time,int * finishTime) {
//	//printf("%d ", index);//��ӡ����Ľڵ�
//	visited[index] = 1;//�÷���Ϊ1
//	for (EdgeNode *w = v->firstEdge; w; w = w->next) {
//		if (w) {//������ڽӵ㣬����DFS
//			if (!visited[w->index]) {//δ����
//				DFS(G, visited, &G->adjlist[w->index],w->index,time,finishTime);
//			}
//		}
//
//	}
//	finishTime[index] = ++time;
//
//}
//void topoSort(ALGraph *G) {
//	int* visited = (int*)malloc(sizeof(int) * G->numV);//���ñ������
//	int* finishTime = (int*)malloc(sizeof(int) * G->numV);//���ñ������
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//		finishTime[i] = 0;
//	}
//	for (int i = 0; i < G->numV; i++) {//�ӵ�һ���ڵ㿪ʼ��˳�����ϡ�
//		if (!visited[i]) {
//			int time = 0;
//			DFS(G, visited, &G->adjlist[i],i,time,finishTime);
//		}
//	}
//
//	//��ӡ��������
//	printf("\n");
//	for (int i = 0; i < G->numV;i++) {
//		int max = -999,k;
//		for (int j = 0; j < G->numV;j++) {
//			if (max<finishTime[j]) {
//				max = finishTime[j];
//				k = j;
//			}
//		}
//		printf("%d ",k+1);
//		finishTime[k] = -999;
//	}
//}
//
//int main() {
//	ALGraph *graph = (ALGraph *)malloc(sizeof(ALGraph));
//	//��������
//	void createGraph(ALGraph *);
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//����ͼ
//	createGraphInFile(graph);
//	//��ӡͼ
//	dispGraph(graph);
//	topoSort(graph);
//	return 0;
//}