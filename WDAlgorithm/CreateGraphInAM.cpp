/*
	使用邻接矩阵构造图
	分析：
		虽然图相比于其它数据结构较复杂，但也是十分易懂的，对于使用邻接矩阵存储的图来说，我们所需要知道的数据有
		图的顶点数、边数、用一个二维数组存储的边与边的联系及其权值，未连接的边我们要使用无穷表示，节点自身用0
		表示，初始时除自身节点外均表示为无穷。另外我们还需要一个一维数组用来存储我们的顶点个数
*/
#define MAXSIZE 100 //数组最大值
typedef struct Graph {
	char Vertex[MAXSIZE];
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//顶点、边数量
}adjMatrix;
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void createGraph(adjMatrix *G) {
	int v, e,vi,vj,w;
	printf("请输入创建的图的顶点与边个数（以空格分开）：");
	scanf("%d %d",&v,&e);
	G->numE = e;
	G->numV = v;
	//初始化图
	for (int i = 0; i < v;i++) {
		for (int j = 0; j < v;j++) {
			i == j ? G->Edge[i][j] = 0 : G->Edge[i][j] = 32767;
		}
	}
	//将顶点存入数组
	for (int i = 0; i < G->numV;i++) {
		printf("请输入第%d个节点信息：",i+1);
		scanf("\n%c",&G->Vertex[i]);
	}
	//开始建立边与边的关系
	for (int i = 0; i < G->numE;i++) {
		printf("请输入边的信息vi vj w(以空格分开)");
		scanf("%d %d %d",&vi,&vj,&w);//有权值就写
		G->Edge[vi - 1][vj - 1] = w;//①
		G->Edge[vj - 1][vi - 1] = w;//②   这代表无向图
	}

}
void dispGraph(adjMatrix *G) {
	int i, j;
	printf("\n输出顶点的信息（字符）:\n");
	for (i = 0; i < G->numV; i++)
		printf("%8c", G->Vertex[i]);

	printf("\n输出邻接矩阵:\n");
	printf("\t");
	for (i = 0; i < G->numV; i++)
		printf("%8c", G->Vertex[i]);

	for (i = 0; i < G->numV; i++)
	{
		printf("\n%8c", G->Vertex[i]);
		for (j = 0; j < G->numV; j++)
		{
			if (G->Edge[i][j] == 32767)
				//两点之间无连接时权值为默认的32767，
				//在无向图中一般用"0"表示，在有向图中一般用"∞",
				//这里为了方便统一输出 "∞"
				printf("%8s", "∞");
			else
				printf("%8d", G->Edge[i][j]);
		}
		printf("\n");
	}

}
//int main() {
//	adjMatrix G;
//	createGraph(&G);
//	dispGraph(&G);
//}