/*
	已知二叉树以二叉链表存储，编写算法完成：对于树中每一个元素值为x的结点，删除以它为根的子树，并释放相应的空间
	分析：
		因为我们要删除以寻找到的元素为根的子树，所以我们删除时应采用递归后序遍历进行删除释放，寻找x采用先序遍历
*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void del(biTree *T) {//释放结点函数
//	if (T) {
//		if (T->lchild)del(T->lchild);
//		if (T->rchild)del(T->rchild);
//		free(T);	
//	}
//	
//}
//void delXsub(biTree *T, biTree *preT, int x) {//这里设置一个父节点指针，因为free只会释放所在节点里面的内容，并不会置空
//	struct biTree *p = T;
//	if (p->data == x) {
//		del(p);
//		preT->lchild = NULL;//手动置空
//		preT->rchild = NULL;
//	}
//	else {
//		if (T->lchild) delXsub(p->lchild,p, x);
//		if (T->rchild) delXsub(p->rchild,p, x);
//
//	}
//}
//int main() {
//	char x, count = 0;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	T->data = NULL;
//	struct biTree *r;
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//创建一颗二叉树
//	printf("请输入要寻找的x值：x=");
//	scanf("%c", &x);
//	delXsub(T,T, x);
//	inOrder(T);
//	return 0;
//}