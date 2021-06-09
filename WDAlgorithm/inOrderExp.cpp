/*
	请设计一个算法，将给定的表达式树，转换成等价的中缀表达式并输出。
	分析：
		题目已然说明我们要采取中序遍历，进而输出该表达式，那么需要注意的点便是我们的括号在哪里加，其中根节点处和叶子结点
		处不需要添加括号，其余情况在访问左子树前加左括号，访问右子树后添加右括号
*/
//struct BTree {
//	char data;
//	struct BTree *left, *right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//BTree *create(BTree *T) {//先序简历二叉树
//	char data;
//	printf("请输入当前节点值：data=");
//	scanf("%c", &data);
//	getchar();
//	if (data != '#') {
//		T = (BTree *)malloc(sizeof(BTree));
//		T->data = data;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//void putInExp(BTree *T,int deep) {
//	if (T==NULL) {
//		return;
//	}
//	if (!T->left&&!T->right) {//若为叶节点，直接输出操作数
//		printf("%c",T->data);
//	}
//	else {
//		if (deep > 1) printf("(");//非根节点，添加左括号
//		putInExp(T->left,deep+1);
//		printf("%c",T->data);
//		putInExp(T->right, deep + 1);
//		if (deep > 1) printf(")");
//
//	}
//}
//int main() {
//	struct BTree *T = (BTree *)malloc(sizeof(BTree));
//	T = create(T);
//	printf("中缀表达式为：");
//	putInExp(T,1);
//	return 0;
//}