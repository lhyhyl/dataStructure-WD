/*
	以孩子兄弟链表为存储结构，请设计递归算法求树的高度
	分析：
		如果只有根节点，那么高度为1，如果有左孩子，那么高度由左孩子的左子树和右子树决定，取其大者。
*/
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
//int getHigh(Tree *T,int high) {
//	if (!T) {//空返回当前高度，这是递归的出口
//		return high;
//	}
//	else {
//		int lhigh = getHigh(T->fch,high+1);//记录左子树高度
//		int rhigh = getHigh(T->nsib,high);//记录右兄弟的高度，注意这里high不能再加一，因为他们是兄弟，平级
//		lhigh > rhigh ? high = lhigh : high = rhigh;//取其大者
//		return high;
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	int high = 0;
//	high = getHigh(T,high);
//	printf("树的高度为：%d",high);
//	return 0;
//}