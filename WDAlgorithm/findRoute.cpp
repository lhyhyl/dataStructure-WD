///*
//	�������vi������vj�����м�·����ͼ���ڽӱ�洢
//	������
//		������˵�����·�������Կ϶����ڼ�·����Ϊ�����·�������ǻ���Ҫ�������һ��path���飬
//		�����洢vi��vj��·�����ݣ���������֮���ӡ���������������Ȼ����������ȱ�����������ȱ������ʺϡ�
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
//
//void print(ALGraph *G, int *path,int d) {
//	for (int i = 0; i <= d; i++)
//		printf("%c ", G->adjlist[path[i]].info);
//	printf("\n");
//}
//void findRoute(ALGraph *G, int vi, int vj, int *path, int *visited, int d) {
//	EdgeNode *p;
//	d++;
//	path[d] = vi;
//	visited[vi] = 1;
//	if (vi == vj) {
//		print(G, path,d);
//	}
//	for (p = G->adjlist[vi].firstEdge; p;p=p->next) {
//		if (!visited[p->index]) {
//			findRoute(G,p->index,vj,path,visited,d);
//		}
//	}
//	visited[vi] = 0;//������λ�ɷ���
//}
//int main() {
//	void createGraphInFile(ALGraph *G);
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void dispGraph(ALGraph *);
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
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	int *path = (int *)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;//��ʼ��
//		path[i] = -1;//��ʼ��
//	}
//	dispGraph(G);
//	findRoute(G, vi - 1, vj - 1, path, visited, -1);
//	return 0;
//}