/*
	�ڲ����ڽӱ�洢��ͼ�Ͻ��й�����ȱ���/������ȱ���
	����������֪���ڽӱ��ϵĶ��������ӵĽڵ㶼���������ڽڵ㣬�����ڹ�����ȱ�����˵�������ڲ�α���������Ҫ�����е��ڽӵ���з��ʣ�
		  ����������Ҫ�ӵ�һ���ڵ㿪ʼ�������������ڽӵ㣬������Ҫע����ǣ������ǰ��ڽӵ���ʺ���Ҫ���η����ڽӵ���ڽӵ㣬�����Ҫ
		  �ö��н����Ƿ��ʹ����ڽӵ���ӣ���Ͳ�α���һ����Ҳֻ�����������ǲ��ܷ������еĽڵ㡣��Ȼ������������У������ظ����ʵ������
		  ����������Ҫ��һ����������¼�ڵ�ķ���������ѷ�����true

		  ����������ȱ���������˼�壬���ǻ��ÿһ���ڵ㡰ե�ɡ�����˳�����ϡ���ͬ��������Ҫһ�����ʱ�����飬������������ȱ�����
		  ���ǽ����õݹ�ķ�ʽ�����С�
*/
//�����ڽӱ�ͼ�ṹ  ��Ϊ�߱�ڵ�ṹ �����ڵ�ṹ ͼ�ṹ

//#define MAXSIZE 100
//#define TYPE int
////�߱�ṹ 
//struct EdgeNode {
//	int index;//�������е��±�
//	int weight;//Ȩֵ
//	EdgeNode *next;//��һ���ڽӵ�
//};
////�����ڵ�ṹ
//typedef struct VertexNode {
//	char info;//�ڵ���Ϣ
//	EdgeNode *firstNode;//��һ���ڽӽڵ�
//}Adjlist[MAXSIZE];
//
////ͼ�ṹ
//struct ALGraph {
//	Adjlist adjlist;//��������
//	int numE, numV;//������������
//};
//
////���нṹ(���ǲ���˳�����)
//struct Squeue {
//	TYPE *arr;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void BFS(ALGraph *G) {//��ʼ��ȱ���
//	//�����йض��еĺ���
//	Squeue *createQueue(int);
//	bool isEmpty(Squeue *);
//	bool enQueue(Squeue *, TYPE, int);
//	bool deQueue(Squeue *sq, TYPE *data, int maxSize);
//	//����һ����־���飬���ڱ�־�ڵ��Ƿ񱻷��� ��ʼ��0,1�����ѷ���
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;
//	}
//
//	Squeue *sq;
//	sq = createQueue(G->numV);//��������
//	//�ӵ�һ���ڵ㿪ʼ����
//	for (int i = 0; i < G->numV; i++) {
//		if (!visited[i]) {//���û�б����ʣ�����з���
//			printf("%c ", G->adjlist[i].info);//����������м򵥵Ĵ�ӡ�������
//			visited[i] = 1;//��Ϊ�ѷ���
//			enQueue(sq, G->adjlist[G->numV].info, G->numV);//���
//
//			while (!isEmpty(sq)) {//���в��գ�ȡ������Ԫ�أ����з���
//				TYPE top;
//				deQueue(sq, &top, G->numV);
//				if (!visited[top]) {
//					visited[top] = 1;
//					printf("%c ", G->adjlist[top].info);
//
//					for (EdgeNode *w = G->adjlist[top].firstNode; w; w = w->next) {//���ν���ǰ�ڵ�ı߱���ӣ��Ͳ�α���һ��
//						if (!visited[w->index])
//							enQueue(sq, w->index, G->numV);
//
//					}
//				}
//
//			}
//
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
//	if (v->firstNode) {//������ڽӵ㣬����DFS
//		if (!visited[v->firstNode->index]) {
//			DFS(G, visited, &G->adjlist[v->firstNode->index], v->firstNode->index);
//		}
//	}
//}
//int main() {
//	ALGraph *graph = (ALGraph *)malloc(sizeof(ALGraph *));
//	//��������
//	void createGraph(ALGraph *);
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	//����ͼ
//	createGraphInFile(graph);
//	//��ӡͼ
//	dispGraph(graph);
//	//������ȱ���
//	//BFS(graph);
//	//������ȱ���
//	DFSBegin(graph);
//	return 0;
//}