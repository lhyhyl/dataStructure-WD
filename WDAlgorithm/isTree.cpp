/*
	���һ���㷨���ж�һ������ͼ�Ƿ���һ����
	������
		����֪����������ǰ�ᣬ���ȸ�����ͼ��������ͨ�ģ��ұ������ܹ��ֻ࣬����n-1���ߡ�
		��ô���ǿ���ͨ��������ȱ�����ͳ�Ƹ�����ͼ�ı����붥����������������Ϊһ����
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
#define TYPE int
typedef struct EdgeNode {//�߱���
	int index;//�ñ���ָ��Ķ����λ��
	int weight;//Ȩֵ
	EdgeNode *next;//��һ���ڽӱ�
}EdgeNode;

typedef struct VertexNode {//�����ڵ�
	char info;//������Ϣ
	EdgeNode *firstEdge;//ָ���һ�������ö���ıߵ�ָ��
}VertexNode, Adjlist[MAXSIZE];

typedef struct {
	Adjlist adjlist;//��������
	int numE, numV;//������������
}ALGraph;
void DFS(ALGraph *G, int *visited, int &numV, int &numE, int index) {
	visited[index] = 1;//���Ϊ�ѷ���
	numV++;//��������һ
	for (EdgeNode* p = G->adjlist[index].firstEdge; p; p = p->next) {
		numE++;
		if (!visited[p->index]) {
			DFS(G, visited, numV, numE, p->index);
		}
	}
}
bool isTree(ALGraph *G) {
	int numV = 0, numE = 0;//ͳ�ƱߺͶ���
	int *visited = (int*)malloc(sizeof(int)*G->numV);
	for (int i = 0; i < G->numV; i++) {
		*(visited + i) = 0;//��������ʼ��
	}
	DFS(G, visited, numV, numE, 0);//ֻ����һ�α���
	if (numV == G->numV&&numE == 2*(G->numV - 1)) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph *));
	bool Tree;
	void createGraphInFile(ALGraph *);
	//void createGraph(ALGraph *);
	//createGraph(G);
	createGraphInFile(G);//����ͼ

	void dispGraph(ALGraph *G);
	dispGraph(G);
	Tree = isTree(G);
	if (Tree) {
		printf("����һ����");
	}
	else {
		printf("�ⲻ��һ����");

	}
	return 0;
}