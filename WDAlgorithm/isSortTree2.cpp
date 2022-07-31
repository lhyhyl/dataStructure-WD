///*
//	编写一个算法判断给定的二叉树是否是二叉排序树
//	分析：
//		二叉排序树的中序序列是升序序列，我们可以根据这一特性来进行判定
//*/
//typedef struct node {
//	int data;
//	node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//Tree *create(Tree *T) {//先序创建一颗二叉树
//	int data;
//	printf("请输入当前节点值：data=");
//	scanf("%d", &data);
//	getchar();
//	if (data != -1) {
//		T = (Tree *)malloc(sizeof(Tree));
//		T->data = data;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//bool isSortTree(Tree *T) {
//	static int min = -32768;//最开始设定min为最小值，确保第一个节点能够进行下去
//	static bool flag = true;//作为是否是升序的标记，采用静态变量，不然每次都会初始化
//	if (T) {
//		isSortTree(T->left);
//		if (T->data < min)
//			flag = false;
//		else
//			min = T->data;//min 1
//		isSortTree(T->right);
//	}
//	return flag;
//}
//int main() {
//	//先创建一颗二叉树
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	isSortTree(T) ? printf("是二叉排序树") : printf("不是二叉排序树");
//	return 0;
//}