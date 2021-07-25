///*
//	从所给的树的层次遍历及其节点度数，构造孩子兄弟链表
//	分析：
//		这里设计到层次遍历，还有孩子-兄弟链表，较为复杂。我们可以设立一个类型为树节点的数组，
//		将层次序列里面的所有值放到该数组中，将其所有节点的fch和sub值为空
//		然后一次去遍历节点，取出度数d，若d>0,说明该节点有孩子，将第一个孩子放到左指针fch，其他孩子
//		一次放到sub中，注意这里会有变化，代码里再详说
//*/
//typedef struct node {
//	char data;
//	node *fch, *nsib;
//}Tree;
//#include<stdio.h>
//#include <stdlib.h>
//void createCSTree_degree(char *level, int *degree, node **pointer, int n) {
//	int k = 0;//判断到了哪个节点
//	for (int i = 0; i < n; i++) {//初始化pointer
//		pointer[i]->data = level[i];
//		pointer[i]->fch = NULL;
//		pointer[i]->nsib = NULL;
//	}
//	for (int i = 0; i < n; i++) {
//		int d = degree[i];
//		if (d) {
//			k++;//k为子女节点序号
//			pointer[i]->fch = pointer[k];
//			for (int j = 0; j < d - 1; j++) {
//				k++;
//				pointer[k - 1]->nsib = pointer[k];
//			}
//		}
//	}
//
//}
//void inOrder(node *T) {
//	if (T) {
//		inOrder(T->fch);
//		printf("%c ", T->data);
//		inOrder(T->nsib);
//	}
//};
//int main() {
//	char level[6] = { 'A','B','E','G','D','F' };//层次遍历，用数组存储
//	int degree[] = { 3,2,0,0,0,0 };
//	node* *pointer = (node* *)malloc(sizeof(node*) * 6);
//	for (int i = 0; i < 6; i++) {
//		pointer[i] = (node*)malloc(sizeof(node*));
//	}
//	createCSTree_degree(level, degree, pointer, 6);
//	inOrder(pointer[0]);
//}