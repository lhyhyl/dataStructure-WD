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
//void BFSBegin(ALGraph *G) {
//	void BFS(ALGraph *, int *, int);
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//���ñ������
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV; i++) {//�ӵ�һ���ڵ㿪ʼ
//		if (!visited[i]) {
//			BFS(G, visited, i);
//		}
//	}
//}
//void BFS(ALGraph *G, int *visited, int v) {//��ʼ��ȱ���
//	//�����йض��еĺ���
//	Squeue *createQueue(int);
//	bool isEmpty(Squeue *);
//	bool enQueue(Squeue *, TYPE, int);
//	bool deQueue(Squeue *, TYPE *, int );
//	Squeue *sq;
//	sq = createQueue(G->numV);//��������
//	printf("%c ", G->adjlist[v].info);//���ʴ������Ķ���
//	enQueue(sq, v, G->numV);//���
//	visited[v] = 1;//��Ϊ�ѷ���
//	while (!isEmpty(sq)) {//���в��գ�ȡ������Ԫ�أ����з���
//		TYPE top;
//		deQueue(sq, &top, G->numV);
//		for (EdgeNode *w = G->adjlist[top].firstEdge; w; w = w->next) {//���ν���ǰ�ڵ�ı߱���ӣ��Ͳ�α���һ��
//			if (!visited[w->index]) {
//				printf("%c ", G->adjlist[w->index].info);
//				visited[w->index] = 1;
//				enQueue(sq, w->index, G->numV);
//			}
//		}
//	}
//
//}
//void DFSBegin(ALGraph *G) {
//	void DFS(ALGraph *, int *, VertexNode *, int);
//	int *visited = (int *)malloc(sizeof(int)*G->numV);//���ñ������
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//	for (int i = 0; i < G->numV; i++) {//�ӵ�һ���ڵ㿪ʼ��˳�����ϡ�
//		if (!visited[i]) {
//			DFS(G, visited, &G->adjlist[i], i);
//		}
//	}
//}
//void DFS(ALGraph *G, int *visited, VertexNode *v, int index) {
//	printf("%c ", v->info);//��ӡ����Ľڵ�
//	visited[index] = 1;//�÷���Ϊ1
//	for (EdgeNode *w = v->firstEdge; w; w = w->next) {
//		if (w) {//������ڽӵ㣬����DFS
//			if (!visited[w->index]) {//δ����
//				DFS(G, visited, &G->adjlist[w->index], w->index);
//			}
//		}
//
//	}
//}
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
//	//������ȱ���
//	//BFSBegin(graph);
//	//������ȱ���
//	DFSBegin(graph);
//	return 0;
//}