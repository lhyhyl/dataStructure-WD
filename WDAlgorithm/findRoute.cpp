///*
//	输出顶点vi到顶点vj的所有简单路径，图用邻接表存储
//	分析：
//		这里明说了输出路径，所以肯定存在简单路径。为了输出路径，我们还需要额外添加一个path数组，
//		用来存储vi到vj的路径数据，方便我们之后打印输出。我们这里仍然采用深度优先遍历，广度优先遍历不适合。
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAXSIZE 100
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct EdgeNode {//边表结点
//	int index;//该边所指向的顶点的位置
//	int weight;//权值
//	EdgeNode *next;//下一个邻接边
//}EdgeNode;
//
//typedef struct VertexNode {//顶点表节点
//	char info;//顶点信息
//	EdgeNode *firstEdge;//指向第一条依附该顶点的边的指针
//}VertexNode, Adjlist[MAXSIZE];
//
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numE, numV;//边数、顶点数
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
//	visited[vi] = 0;//重新置位可访问
//}
//int main() {
//	void createGraphInFile(ALGraph *G);
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph));
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//创建图
//	int vi, vj;
//	printf("请输入vi，vj\n");
//	printf("vi= ");
//	scanf("%d", &vi);
//	printf("vj= ");
//	scanf("%d", &vj);
//	while (vi > G->numV || vj > G->numV) {
//		printf("输入有误，不存在该顶点，请重新输入！");
//		printf("vi= ");
//		scanf("%d", &vi);
//		printf("vj= ");
//		scanf("%d", &vj);
//	}
//	int *visited = (int *)malloc(sizeof(int)*G->numV);
//	int *path = (int *)malloc(sizeof(int)*G->numV);
//	for (int i = 0; i < G->numV; i++) {
//		visited[i] = 0;//初始化
//		path[i] = -1;//初始化
//	}
//	dispGraph(G);
//	findRoute(G, vi - 1, vj - 1, path, visited, -1);
//	return 0;
//}