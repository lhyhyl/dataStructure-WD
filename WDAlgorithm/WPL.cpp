///*
//	二叉树的带权路径长度（WPL）是二叉树中所有叶节点的带权路径长度之和。给定一颗二叉树T,采用二叉链表存储，节点结构为
//	left weight right
//	试设计求T的WPL的算法
//	分析：
//		我们求带权路径长度，既需要知道叶节点的权值，也需要知道其经过的路径，我们可以设置一个变量depth代表深度，也就是
//		路径长度，设置一个静态变量weight累加带权路径，会使用到递归。
//*/
//struct tree {
//	int weight;
//	struct tree *left, *right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//tree *create(tree *T) {//建立一颗二叉树
//	int weight;
//	printf("请输入当前节点权值：weight=");
//	scanf("%d", &weight);
//	getchar();
//	if (weight != -1) {
//		T = (tree *)malloc(sizeof(tree));
//		T->weight = weight;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//int countWPL(tree *T, int depth) {
//	static int totalWeight = 0;//设置静态变量
//	if (T) {
//		if (!T->left && !T->right) {//已经是叶节点
//			totalWeight += T->weight*depth;//计算带权路径
//		}
//		else {
//			countWPL(T->left, depth + 1);//左子树
//			countWPL(T->right, depth + 1);//右子树
//		}
//	}
//	return totalWeight;
//}
//int main() {
//	struct tree *T = (struct tree *)malloc(sizeof(struct tree));
//	T = create(T);
//	int depth = 0;
//	int totalW;
//	totalW = countWPL(T, depth);
//	printf("该二叉树的带权路径长度为：%d", totalW);
//	return 0;
//}