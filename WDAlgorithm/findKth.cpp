///*
//	编写一个递归算法，在一棵有n个节点的、随机建立起来的二叉排序树上查找第k小的元素，并返回指向该节点的指针，要求算法的平均
//	时间复杂度为O(logn)。二叉排序树的每个节点中除了data、lchild、rchild等数据成员外，增加一个count成员，保存以该节点为根的
//	子树的节点个数
//	分析：
//		这里要求时间复杂度为O(ln)，我们就不能采用常规的方法了，这里我们需要利用递归的思想，将各种情况罗列清楚
//		一、t->lchild 为空
//		①如果t->rchild 非空 且 k=1，那么根据二叉排序树的特性 t即为第k小
//		②如果t->rchild 非空 且 k!=1，那么第k小的数肯定在右子树中
//		二、如果t->lchild 非空
//		①如果t->lchild->count ==k-1,那么t即为第k小
//		②如果t->lchild->count > k-1,那么第k小在左子树
//		③如果t->lchild->count < k-1,那么第k小在右子树，寻找第k-(t->lchild->count +1)小的元素
//
//		这道题的那点就在于对问题的分析，我们很容易就遗漏某些情况，导致代码逻辑有问题，需要注意
//
//
//*/
//
//typedef struct node {
//	int data;
//	int count;//子树节点个数
//	struct node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//Tree *create(Tree *T) {//先序创建一颗排序二叉树
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
//int getCount(Tree *T) {//统计每个节点的以它为根的子树的节点个数
//	if (!T)return 0;
//	int lcount, rcount;
//	lcount = getCount(T->left);
//	rcount = getCount(T->right);
//	T->count = lcount + rcount + 1;
//	return lcount + rcount + 1;
//}
//Tree *findKth(Tree *T, int k) {
//	if (k<1 || k>T->count)return NULL;
//	if (!T->left) {
//		if (k == 1) return T;
//		else return findKth(T->right, k - 1);
//
//	}
//	else {
//		if (T->left->count == k - 1) return T;
//		if (T->left->count > k - 1) return findKth(T->left, k);
//
//		if (T->left->count < k - 1) return findKth(T->right, k - (T->left->count + 1));
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	Tree *p;
//	int k = 5;
//	T = create(T);
//	getCount(T);
//	p = findKth(T, k);
//	if (p) {
//		printf("第 %d 小的节点值为 %d",k,p->data);
//	}
//	return 0;
//}