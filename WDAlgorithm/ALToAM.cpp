///*
//	写出从图的邻接表表示转换成邻接矩阵表示的算法
//	分析：
//		我们之前也写过邻接矩阵的存储方式，在这里我们就只需要去遍历邻接表中的每一个顶点，并根据边的信息，将数据填入邻接矩阵中即可
//*/
////分别写出邻接表和邻接矩阵两种方式的结构体
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//typedef struct {
//	char Vertex[MAXSIZE];
//	int Edge[MAXSIZE][MAXSIZE];
//	int numV, numE;//顶点、边数量
//}adjMatrix;//邻接矩阵
//
//
////邻接表存储的图
//typedef struct EdgeNode {
//	int index;//此边所指顶点的位置
//	int weight;//边的权值
//	EdgeNode *next;//下一条邻接边
//}EdgeNode;
//typedef struct {
//	int info;//顶点信息
//	EdgeNode *firstEdge;//该顶点所连接的第一条边
//}Adjlist[MAXSIZE];
//typedef struct {
//	Adjlist adjlist;//顶点数组
//	int numV, numE;//顶点、边数量
//}ALGraph;
//void edgeIput(ALGraph *alG, adjMatrix *amG, int index, int *visited) {
//	visited[index] = 1;//标记为已访问
//	for (EdgeNode *p = alG->adjlist[index].firstEdge; p; p = p->next) {
//		amG->Edge[index][p->index] = p->weight;//边信息存入邻接矩阵
//		if (!visited[p->index])
//			edgeIput(alG, amG, p->index, visited);
//	}
//}
//void transform(ALGraph *alG, adjMatrix *amG) {//开始进行转换
//	
//	amG->numE = alG->numE;
//	amG->numV = alG->numV;
//	for (int v = 0; v < alG->numV; v++) {
//		amG->Vertex[v] = alG->adjlist[v].info;//顶点信息存入邻接矩阵
//	}
//	for (int v = 0; v < alG->numV; v++) {
//		//存入边信息
//		EdgeNode *p = alG->adjlist[v].firstEdge;
//		while (p) {
//			amG->Edge[v][p->index] = p->weight;
//			p = p->next;
//		}
//	}
//}
//int main() {
//	ALGraph *alG = (ALGraph*)malloc(sizeof(ALGraph *));
//	adjMatrix amG;
//	void createGraphInFile(ALGraph*);//声明方法
//	void dispGraph(adjMatrix *);
//	createGraphInFile(alG);//创建图G
//	transform(alG, &amG);
//	//dispGraph(&amG);
//	return 0;
//}