///*
//	������������ö�������洢�������һ���㷨,����������е�k��1<=k<=�������Ľڵ���������ڵ��ֵ
//	������
//		�ܼ򵥣�ÿ����һ���ڵ㣬���������һ��ֱ������k
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//biTree *preK(biTree *T, int k) {
//	static int num = 0;
//	static biTree *r;
//	if (!T) return NULL;
//	if (++num == k) {//�ҵ��󣬼�¼����
//		r = T;
//	}
//	else {
//		preK(T->lchild, k);
//		preK(T->rchild, k);
//	}
//
//	return r;
//}
//int main() {
//	int k, count = 0;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	T->data = NULL;
//	struct biTree *r;
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	void nodeNum(biTree *, int *);
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);
//	if (!count) {
//		printf("�ö������ǿ���");
//	}
//	else {
//		printf("������ҪѰ�ҵ�kֵ��1<=k<=%d����k=", count);
//		scanf("%d", &k);
//		while (k<1 || k>count) {
//			printf("�������������� k=");
//			scanf("%d", &k);
//		}
//		r = preK(T, k);
//		printf("��%d���ڵ�ֵΪ%c", k, r->data);
//	}
//
//	return 0;
//}