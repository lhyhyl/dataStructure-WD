///*
//	��֪�������Զ�������洢����д�㷨��ɣ���������ÿһ��Ԫ��ֵΪx�Ľ�㣬ɾ������Ϊ�������������ͷ���Ӧ�Ŀռ�
//	������
//		��Ϊ����Ҫɾ����Ѱ�ҵ���Ԫ��Ϊ������������������ɾ��ʱӦ���õݹ�����������ɾ���ͷţ�Ѱ��x�����������
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void del(biTree *T) {//�ͷŽ�㺯��
//	if (T) {
//		if (T->lchild)del(T->lchild);
//		if (T->rchild)del(T->rchild);
//		free(T);
//	}
//
//}
//void delXsub(biTree *T, int x) {//��������һ�����ڵ�ָ�룬��Ϊfreeֻ���ͷ����ڽڵ���������ݣ��������ÿ�
//	struct biTree *p = T;
//	if (p->lchild && p->lchild->data == x) {
//		del(p->lchild);
//		p->lchild = NULL;
//	}
//	if (p->rchild && p->rchild->data == x) {
//		del(p->rchild);
//		p->rchild = NULL;
//	}
//	if (p->lchild) delXsub(p->lchild, x);
//	if (p->rchild) delXsub(p->rchild, x);
//
//
//}
//int main() {
//	char x;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	printf("������ҪѰ�ҵ�xֵ��x=");
//	scanf("%c", &x);
//	if (T->data == x) {
//		del(T);
//	}
//	else {
//		delXsub(T, x);
//	}
//	inOrder(T);
//	return 0;
//}