///*
//	prim�㷨(�����ڽӱ�)��
//		�㷨���ģ�
//				��������һ��prim���飬���ڴ洢���μ���Ķ��㣬����Ĺ�����Ǵ����ж�����Ѱ��Ȩֵ��С���ڽӵ㣬������һ����λ����
//				���ڴ洢��������Ȩֵ��Ϣ
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXSIZE 100
//#define TYPE int
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
//struct Tree {
//	char data;
//	struct Tree *lchild, *rchild;
//};
//void outPut(ALGraph *G,int **weights) {//�����С������
//	for (int i = 0; i < G->numV; i++) {
//		for (int j = i; j < G->numV; j++) {
//			if (weights[i][j]!=0) {
//				printf("%c->%c(%d)\n",G->adjlist[i].info, G->adjlist[j].info,weights[i][j]);
//			}
//		}
//	}
//}
//void prim(ALGraph *G,int start) {
//	int *prims = (int *)malloc(sizeof(int )*G->numV);//������СΪͼ������������飬���ڴ洢���μ���Ķ���
//	int **weights = (int **)malloc(sizeof(int *)*G->numV);//������Ȩֵ����
//	for (int i = 0; i < G->numV; i++) {
//		prims[i]=-1;//��ʼ��Ϊ-100������û�ж���Ŀǰ����
//	}
//	for (int i = 0; i < G->numV; i++) {
//		weights[i] = (int *)malloc(sizeof(int *)*G->numV);
//	}
//	for (int i = 0; i < G->numV;i++) {
//		for (int j = 0; j < G->numV;j++) {
//			weights[i][j] = 0;//��ʼ���ö�λ����
//		}
//	}
//	int weight= 32767;//Ȩֵ����
//	int index = 0;
//	int s;//��¼��ǰ�ҵ�����С�ߵ���ʼ����
//	EdgeNode *r=(EdgeNode *)malloc(sizeof(EdgeNode *));//��¼��ǰ�ҵ�����С�ߵ��յ�
//	prims[index++] = start;//�Ƚ�start����prims����
//	while (index != G->numV) {//����δȫ������prims���飬��������
//		for (int i = 0; i < index; i++) {//��prims�����е�ֵΪ�������С��
//			for (EdgeNode *p = G->adjlist[i].firstEdge; p;p=p->next) {
//				if (weight > p->weight && !weights[i][p->index]&&prims[p->index]==-1) {//Ȩֵ��С��δ���룬�յ�δ���ʣ����������
//					weight = p->weight;
//					r = p;
//					s = i;
//				}
//			}
//		}
//		//�ҵ���̱ߺ󣬼���prims���飬����weights����
//		prims[index++] = r->index;
//		weights[s][r->index] = r->weight;
//		weights[r->index][s] = r->weight;
//		weight = 32767;//������Ϊ���ֵ
//	}
//	outPut(G,weights);
//}
//int main() {
//	ALGraph *G = (ALGraph *)malloc(sizeof(ALGraph *));
//	void createGraphInFile(ALGraph *);
//	void dispGraph(ALGraph *);
//	createGraphInFile(G);//����ͼ
//	dispGraph(G);
//	prim(G,0);
//	return 0;
//}