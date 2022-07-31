///*
//	编程求以孩子兄弟表示法存储的森林的叶子结点数
//	分析：
//			我们可以试想一个节点它如果有左孩子，那么根据孩子兄弟表示法的规则，那它一定不是叶节点，相反如果没有左孩子，那么
//			它一定是叶子结点，其右孩子即它的兄弟，同样应该这样去判断。
//*/
//typedef struct node {
//	char data;
//	node *fch, *nsib;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//Tree *create(Tree *T) {//先序创建一颗二叉树
//	char data;
//	printf("请输入当前节点值：data=");
//	scanf("%c", &data);
//	getchar();
//	if (data != '#') {
//		T = (Tree *)malloc(sizeof(Tree));
//		T->data = data;
//		T->fch = NULL;
//		T->nsib = NULL;
//		T->fch = create(T->fch);
//		T->nsib = create(T->nsib);
//	}
//	return T;
//}
//int frostLeaf(Tree *T) {
//	if (!T) {//空则返回0，也是递归的出口
//		return 0;
//	}
//	else {
//		if (!T->fch) {//没有左孩子，该节点为叶子结点
//			return 1 + frostLeaf(T->nsib);
//		}
//		else {//有左孩子，该节点不是叶子结点
//			return frostLeaf(T->fch) + frostLeaf(T->nsib);
//		}
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	printf("该森林的叶子结点个数为：%d", frostLeaf(T));
//	return 0;
//}