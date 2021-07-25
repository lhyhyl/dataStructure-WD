///*
//	利用二叉树遍历的思想编写一个判断二叉树是否是二叉平衡树的算法
//	分析：
//		我们可以采取后序遍历来完成该算法，因为后序遍历不会含有重复计算。
//		我们对每一个节点进行判断，如果左右子树均平衡且左右子树高度差小于等于1，则该节点平衡
//
//*/
//struct Tree {
//	int data;
//	Tree *left, *right;
//};
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
//bool isAVL(Tree *T, int *depth) {
//	if (!T) {//空节点，为平衡二叉树
//		*depth = 0;
//		return true;
//	}
//	int left = 0, right = 0;
//	if (isAVL(T->left, &left) && isAVL(T->right, &right)) {//判断左右子树是否为平衡二叉树
//		int diff = left - right;//左右子树的高度差
//		if (abs(diff) <= 1) {//满足小于等于1,那就是平衡二叉树
//			*depth	= (1 + (left > right ? left : right));
//			return true;
//		}
//	}
//	return false;//前面一直未返回true，那就不是平衡二叉树
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);//创建一颗二叉树
//	int depth = 0;
//	isAVL(T, &depth) ? printf("是二叉平衡树"):printf("不是二叉平衡树");
//	return 0;
//}