/*
	采用邻接表的方式存储图
	分析：
		采用邻接表相对于邻接矩阵来说更节省存储空间，这里我们需要两个数据结构：
		①顶点表结构：包括顶点信息及指向第一个邻接点的头指针
		②边表结构：包括该邻接点域（在数组中的下标）、权值及下一个邻接点指针
		③一个数组，用于存储所有顶点，因为数组的随机存储特性，方便我们查找
		④图结构：包括顶点数组及顶点数、边数
		具体创建流程：
				首先我们需要输入图的顶点数和边数，将其存入图结构中，并由输入的顶点数依次输入顶点信息，并将第一个邻接点的头指针
			置位NULL，这是建立顶点表的流程；
				其次我们需要建立边表，根据输入的边个数，依次输入边（vi，vj）的顶点序号，再采取头插法进行插入，若是无向图则需要
			重复反向依次设置，至此，图的邻接表结构建立完成。

*/
#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 100
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
#include <stdio.h>
#include <stdlib.h>

void createGraph(ALGraph *G) {
	int e, v, vi, vj, w;
	printf("请输入图的边数与结点数（以空格分开）：");
	scanf("\n%d %d", &e, &v);
	G->numE = e;
	G->numV = v;
	printf("请依次输入顶点信息：\n");
	for (int i = 0; i < G->numV; i++) {
		printf("请输入第%d个结点信息：", i + 1);
		scanf("\n%c", &G->adjlist[i].info);
		G->adjlist[i].firstEdge = NULL;
		G->adjlist[i].firstEdge->index = -1;
	}

	printf("请输入边表信息：\n");
	for (int i = 0; i < G->numE; i++) {
		printf("请输入边（vi，vj）的顶点序号及其权值（以空格分开）：");
		scanf("%d %d %d", &vi, &vj, &w);
		//若是无向图则需要两个顶点进行操作,采用头插法
		EdgeNode *e = (EdgeNode *)malloc(sizeof(EdgeNode *));
		e->index = vj - 1;//数组下标要减一
		e->weight = w;
		e->next = G->adjlist[vi - 1].firstEdge;
		G->adjlist[vi - 1].firstEdge = e;

		/*EdgeNode *ed = (EdgeNode *)malloc(sizeof(EdgeNode *));
		ed->index = vi - 1;
		ed->weight = w;
		ed->next = G->adjlist[vj - 1].firstNode;
		G->adjlist[vj - 1].firstNode = ed;*/
	}

}
void createGraphInFile(ALGraph *G) {//从文件中读取我们的图的数据，包括边数，节点数，对应关系
	FILE *fp;//创建文件指针
	char ev[4] = { 0 };//顶点，边个数信息
	char arc[6] = { 0 };//边信息
	char *vertex;//顶点信息，名称
	fp = fopen("graph.txt", "r");//打开文件
	if (fp == NULL) {
		printf("该文件无法打开！");
		return;
	}
	fgets(ev, 4, fp);//读取第一行
	G->numE = atoi(&ev[0]);//因为有空格所以跳着取值
	G->numV = atoi(&ev[2]);//用atoi()将字符型数据转化为整型
	vertex = (char *)malloc(sizeof(char*)*G->numV);//这是用来存储顶点信息的数组（顶点的名字）
	for (int i = 0; i <= G->numE; i++) {//开始获取后面的信息
		if (i == 0) {//此时，根据我们文件的结构，第二行是顶点信息
			fgets(ev, 4, fp);//获取回车符，上一次fgets后会停在回车符那儿
			fgets(vertex,G->numV*2,fp);//这里获取顶点信息
			int w = 0;//用一个计数器，保证adjlist依次存储顶点
			for (int j = 0; j < G->numV*2;j++) {//因为有空格，所以让j<G->numV*2
				if (vertex[j]==32) {//是空格，不进行操作
					continue;
				}
				else {//开始赋值
					G->adjlist[w].info = vertex[j];
					G->adjlist[w].firstEdge = NULL;
					w++;
				}
			}
		}
		else {//开始依次存储边信息
			fgets(ev, 4, fp);//同样先吃掉换行符
			fgets(arc, 6, fp);//读取该行的边信息
			EdgeNode *e = (EdgeNode *)malloc(sizeof(struct EdgeNode ));
			e->index = atoi(&arc[2]) - 1;//数组下标要减一
			e->weight = atoi(&arc[4]);
			e->next = G->adjlist[atoi(&arc[0])-1].firstEdge;//采用头插法
			G->adjlist[atoi(&arc[0])-1].firstEdge = e;
			
			//下面与上面相似，目的在于构建无向图
			//EdgeNode *otherE = (EdgeNode *)malloc(sizeof(struct EdgeNode ));
			//otherE->index = atoi(&arc[0]) - 1;//数组下标要减一
			//otherE->weight = atoi(&arc[4]);
			//otherE->next = G->adjlist[atoi(&arc[2]) - 1].firstEdge;
			//G->adjlist[atoi(&arc[2]) - 1].firstEdge = otherE;
		}

	}
	fclose(fp);
}
void dispGraph(ALGraph *G) {//将图用邻接表的形式展示出来
	for (int i = 0; i < G->numV; i++) {
		int j = i;
		printf("%c-->", G->adjlist[j].info);
		EdgeNode *p = G->adjlist[j].firstEdge;
		while (p) {
			printf("(%d)%c-->", p->weight, G->adjlist[p->index].info);
			p = p->next;
		}
		printf("^\n");
	}

}
//int main() {
//	ALGraph G;
//	createGraphInFile(&G);
//	dispGraph(&G);
//	return 0;
//}