/*
	���ļ����ڴ���һ�����������.
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

biTree *create(biTree *T) {//�������ǲ������򴴽�һ�Ŷ�����
	char data;
	printf("�����뵱ǰ�ڵ�ֵ��data=");
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
//����ݹ����
void inOrder(biTree *T) {
	if (T!=NULL) {
		inOrder(T->lchild);
		printf("%c ",T->data);
		inOrder(T->rchild);
	}
}
//����ݹ����
void preOrder(biTree *T) {
	if (T != NULL) {
		printf("%c ", T->data);
		preOrder(T->lchild);
		preOrder(T->rchild);
	}
}
//����ݹ����
void postOrder(biTree *T) {
	if (T != NULL) {
		postOrder(T->lchild);
		postOrder(T->rchild);
		printf("%c ", T->data);
	}
}
//ͳ�ƽڵ����
void nodeNum(biTree *T,int *num) {
	if (T != NULL) {
		(*num)++;//ע������++�����ȼ�����*��Ҫ��������
		nodeNum(T->lchild,num);
		nodeNum(T->rchild,num);
	}
}