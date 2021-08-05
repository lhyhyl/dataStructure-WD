/*
	写出从图的邻接表表示转换成邻接矩阵表示的算法
	分析：
		我们之前也写过邻接矩阵的存储方式，在这里我们就只需要去遍历邻接表中的每一个顶点，
		并根据边的信息，将数据填入邻接矩阵中即可
*/
//分别写出邻接表和邻接矩阵两种方式的结构体
//结构体的构建一定要和创建邻接表、创建邻接矩阵里的一模一样，不然会有问题，把我整惨了
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100
typedef struct Graph {
	char Vertex[MAXSIZE];//顶点数组
	int Edge[MAXSIZE][MAXSIZE];
	int numV, numE;//顶点、边数量
}adjMatrix;//邻接矩阵


//邻接表存储的图
typedef struct EdgeNode {//边表结点
	int index;//该边所指向的顶点的位置,在顶点数组里面的位置信息
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
void edgeIput(ALGraph *alG, adjMatrix *amG, int index, int *visited) {
	visited[index] = 1;//标记为已访问
	for (EdgeNode *p = alG->adjlist[index].firstEdge; p; p = p->next) {
		amG->Edge[index][p->index] = p->weight;//边信息存入邻接矩阵
		if (!visited[p->index])
			edgeIput(alG, amG, p->index, visited);
	}
}
void transform(ALGraph *alG, adjMatrix *amG) {//开始进行转换
	
	amG->numE = alG->numE;
	amG->numV = alG->numV;
	for (int v = 0; v < amG->numV; v++) {
		amG->Vertex[v] = alG->adjlist[v].info;//顶点信息存入邻接矩阵
	}
	//初始化图
	for (int i = 0; i < amG->numV; i++) {
		for (int j = 0; j < amG->numV; j++) {
			i == j ? amG->Edge[i][j] = 0 : amG->Edge[i][j] = 32767;
		}
	}
	for (int v = 0; v < amG->numV; v++) {
		//存入边信息
		EdgeNode *p = alG->adjlist[v].firstEdge;
		while (p) {
			amG->Edge[v][p->index] = p->weight;
			p = p->next;
		}
	}
}
int main() {
	ALGraph alG;
	adjMatrix amG;
	void createGraphInFile(ALGraph*);//声明方法
	void dispGraph(adjMatrix *);
	createGraphInFile(&alG);//创建图G
	transform(&alG, &amG);
	dispGraph(&amG);
	return 0;
}