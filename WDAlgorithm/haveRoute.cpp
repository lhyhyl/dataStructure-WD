///*
//	�ֱ����������ȱ����͹�����ȱ����ж��Ƿ������vi��vj��·����ͼ���ڽӱ�洢
//	������
//		����������ȣ����Ǵ�vi���㿪ʼ������ȱ�������������·�����Ȼ�����ߵ�vj���㴦��
//		���ù�����ȣ�ͬ����vi���㿪ʼ���й�ȱ��������������Ȼ�����ߵ�vj���㴦��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
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
////����
//struct Link {
//	int node;//���ǽ��й������ʱ���õ���������������
//	Link *next;
//};
//struct LinkQueue {
//	Link *front, *rear;
//};
//
//void DFS(ALGraph *G, int vi, int vj, int *visited, int &flag) {
//	for (EdgeNode *p = G->adjlist[vi].firstEdge; p; p = p->next) {
//		if (!visited[p->index]) {
//			visited[p->index] = 1;
//			if (p->index == vj) {//��ʱ�ҵ���ֹ����
//				flag = 1;
//			}
//			DFS(G, p->index, vj, visited, flag);
//		}
//	}
//
//}
//bool judgeRouteInDFS(ALGraph *G, int vi, int vj) {//����ͼG��·�߶˵�vi vj
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	int flag = 0;//����ݹ飬·�����ڱ�־
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;//��ʼ��
//	}
//	if (!visited[vi]) {
//		visited[vi] = 1;
//		DFS(G, vi, vj, visited, flag);
//	}
//	if (flag) {
//		return 1;
//
//	}
//	else {
//		return 0;
//	}
//
//}
//
//bool judgeRouteInBFS(ALGraph *G, int vi, int vj) {
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	int flag = 0;//����ݹ飬·�����ڱ�־
//	int index;//�����ж���
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;//��ʼ��
//	}
//	bool isEmpty(LinkQueue *lq);
//	bool enQueue(LinkQueue *, int);
//	bool deQueue(LinkQueue *, int*);
//	LinkQueue *create();//�����������еķ�����������ȱ�����Ҫ�õ�����
//	LinkQueue *lq;
//	lq = create();
//	if (!visited[vi]) {
//		visited[vi] = 1;
//		enQueue(lq, vi);//���
//	}
//	while (!isEmpty(lq)) {//�����в��գ�ȡ������Ԫ�ؽ����ж�
//		deQueue(lq, &index);
//		if (!visited[index]) {//��δ�����ʹ��������ж�
//			visited[index] = 1;
//			if (vj == index) {
//				flag = 1;
//			}
//		}
//		for (EdgeNode *p = G->adjlist[index].firstEdge; p; p = p->next) {
//			if (!visited[p->index]) {
//				enQueue(lq, p->index);//�����е�δ���ʹ����ڽӶ������
//
//			}
//		}
//	}
//	return flag;
//}
//int main() {
//	int haveRoute;
//	void createGraphInFile(ALGraph *);
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph *));
//	createGraphInFile(G);//����ͼ
//	int vi, vj;
//	printf("������vi��vj\n");
//	printf("vi= ");
//	scanf("%d", &vi);
//	printf("vj= ");
//	scanf("%d", &vj);
//	while (vi > G->numV || vj > G->numV) {
//		printf("�������󣬲����ڸö��㣬���������룡");
//		printf("vi= ");
//		scanf("%d", &vi);
//		printf("vj= ");
//		scanf("%d", &vj);
//	}
//	//haveRoute = judgeRouteInBFS(G, vi - 1, vj - 1);
//	haveRoute = judgeRouteInDFS(G, vi - 1, vj - 1);
//	if (haveRoute) {
//		printf("����%d������%d����·��", vi, vj);
//	}
//	else {
//		printf("%d��%d������·��", vi, vj);
//	}
//	return 0;
//}