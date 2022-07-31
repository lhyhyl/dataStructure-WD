///*
//	编写一个算法判断给定的二叉树是否是二叉排序树
//	分析：
//		二叉排序树的特点就是，根节点的值比左子树大，比右子树小。我们可以每次访问一个节点时，分别找到其左子树的最大值，右子树的
//		最小值，如果小于左子树最大值，大于右子树最小值，则可判断该树不是二叉排序树。
//*/
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
//int getMax(Tree *T) {
//	if (T) {
//		static int max = T->data;
//		if (T->left&&max < T->left->data) {
//			max = T->left->data;
//		}
//		if (T->right&&max < T->right->data) {
//			max = T->right->data;
//		}
//		getMax(T->left);
//		getMax(T->right);
//		return max;
//	}
//	return -1;
//}
//int getMin(Tree *T) {
//	if (T) {
//		static int min = T->data;
//		if (T->left&&min > T->left->data) {
//			min = T->left->data;
//		}
//		if (T->right&&min > T->right->data) {
//			min = T->right->data;
//		}
//		getMin(T->left);
//		getMin(T->right);
//		return min;
//	}
//	return 9999;
//}
//bool isSort(Tree *T) {
//	if (!T || !T->left && !T->right) {//空树或只有根节点是二叉排序树
//		return true;
//	}
//	if (T->data < getMax(T->left)) {//如果当前节点小于左子树最大节点，不是二叉排序树
//		return false;
//	}
//	if (T->data > getMin(T->right)) {//如果当前节点大于右子树最小节点，不是二叉排序树
//		return false;
//	}
//	return isSort(T->left)&& isSort(T->right);//判断左子树//判断右子树
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	isSort(T) ? printf("是二叉排序树"): printf("不是二叉排序树");
//	return 0;
//}