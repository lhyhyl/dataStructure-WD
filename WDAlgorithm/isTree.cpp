/*
	设计一个算法，判断一个无向图是否是一棵树
	分析：
		我们知道，是树的前提，首先该无向图必须是连通的，且边数不能过多，只能是n-1条边。
		那么我们可以通过深度优先遍历来统计该无向图的边数与顶点数，符合条件则为一棵树
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
#define TYPE int
typedef struct EdgeNode {//边表结点
	int index;//该边所指向的顶点的位置
	int weight;//权值
	EdgeNode *next;//下一个邻接边
}EdgeNode;

typedef struct VertexNode {//顶点表节点
	char info;//顶点信息
	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
}VertexNode, Adjlist[MAXSIZE];

typedef struct {
	Adjlist adjlist;//顶点数组
	int numE, numV;//边数、顶点数
}ALGraph;
void DFS(ALGraph *G, int *visited, int &numV, int &numE, int index) {
	visited[index] = 1;//标记为已访问
	numV++;//顶点数加一
	for (EdgeNode* p = G->adjlist[index].firstEdge; p; p = p->next) {
		numE++;
		if (!visited[p->index]) {
			DFS(G, visited, numV, numE, p->index);
		}
	}
}
bool isTree(ALGraph *G) {
	int numV = 0, numE = 0;//统计边和顶点
	int *visited = (int*)malloc(sizeof(int)*G->numV);
	for (int i = 0; i < G->numV; i++) {
		*(visited + i) = 0;//标记数组初始化
	}
	DFS(G, visited, numV, numE, 0);//只进行一次遍历
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
	createGraphInFile(G);//创建图

	void dispGraph(ALGraph *G);
	dispGraph(G);
	Tree = isTree(G);
	if (Tree) {
		printf("这是一棵树");
	}
	else {
		printf("这不是一棵树");

	}
	return 0;
}