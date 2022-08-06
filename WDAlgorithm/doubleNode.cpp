///*
//	假设二叉树采取二叉链表存储结构存储，试设计一个算法，计算一颗给定的二叉树所有的双分支节点个数
//	分析：
//		其实二叉树各类操作都十分适合递归，这里我们同样可以采取递归的做法来进行统计双分支节点的个数。具体做法，我们
//		最开始便定义一个静态变量，递归出口既是无左右孩子。
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//int doubleNode(biTree *T) {
//	static int num = 0;//注意这里一定要使用静态变量，不然每一次进入递归都会初始化num
//	if (!T)num = 0;
//	if (T->lchild&&T->rchild) {
//		num++;
//		doubleNode(T->lchild);
//		doubleNode(T->rchild);
//	}
//	else {
//		if (T->lchild)doubleNode(T->lchild);
//		if (T->rchild)doubleNode(T->rchild);
//	}
//	return num;
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *);
//	T = create(T);//创建一颗二叉树
//	num = doubleNode(T);
//	printf("该二叉树中的双分支节点个数有：%d",num);
//	return 0;
//}