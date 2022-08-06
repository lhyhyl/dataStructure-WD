/*
	该文件用于创建一颗链表二叉树.
*/
#define _CRT_SECURE_NO_WARNINGS
#define TYPE char
struct biTree {
	TYPE data;
	biTree *lchild;
	biTree *rchild;
	int ltag, rtag;
};
#include <stdio.h>
#include <stdlib.h>

biTree *create(biTree *T) {//这里我们采用先序创建一颗二叉树
	char data;
	printf("请输入当前节点值：data=");
	scanf("%c",&data);
	getchar();
	if (data != '#') {
		T = (biTree *)malloc(sizeof(biTree));
		T->data = data;
		T->lchild = NULL;
		T->rchild = NULL;
		T->ltag = 0;
		T->rtag = 0;
		T->lchild = create(T->lchild);
		T->rchild = create(T->rchild);
	}
	return T;
}
//中序递归遍历
void inOrder(biTree *T) {
	if (T!=NULL) {
		inOrder(T->lchild);
		printf("%c ",T->data);
		inOrder(T->rchild);
	}
}
//先序递归遍历
void preOrder(biTree *T) {
	if (T != NULL) {
		printf("%c ", T->data);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}
//后序递归遍历
void postOrder(biTree *T) {
	if (T != NULL) {
		postOrder(T->lchild);
		postOrder(T->rchild);
		printf("%c ", T->data);
	}
}
//统计节点个数
void nodeNum(biTree *T,int *num) {
	if (T != NULL) {
		(*num)++;//注意这里++的优先级高于*，要加上括号
		nodeNum(T->lchild,num);
		nodeNum(T->rchild,num);
	}
}