/*
	设计一个算法，求出指定节点在给定二叉排序树中的层次
	分析：
		我们可以根据二叉排序树的性质，从根节点一直向下查找，每查找一次，层次便加一
*/
//typedef struct node {
//	int data;
//	node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
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
//int findLevel(Tree *T, int p) {
//	static int depth = 1;
//	if (T) {
//		if (T->data < p) {
//			findLevel(T->right, p);
//			depth++;
//		}
//		else if(T->data > p){
//			findLevel(T->left, p);
//			depth++;
//		}
//	}
//	return depth;
//}
//int main() {
//	//创建一颗二叉排序树
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	int p = 9,depth;//手动指定节点值
//	depth = findLevel(T,p);
//	printf("该节点所在的层次为第%d层",depth);
//	return 0;
//}