/*
	��֪�������Զ�������洢����д�㷨��ɣ���������ÿһ��Ԫ��ֵΪx�Ľ�㣬ɾ������Ϊ�������������ͷ���Ӧ�Ŀռ�
	������
		��Ϊ����Ҫɾ����Ѱ�ҵ���Ԫ��Ϊ������������������ɾ��ʱӦ���õݹ�����������ɾ���ͷţ�Ѱ��x�����������
*/
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
//void delXsub(biTree *T, biTree *preT, int x) {//��������һ�����ڵ�ָ�룬��Ϊfreeֻ���ͷ����ڽڵ���������ݣ��������ÿ�
//	struct biTree *p = T;
//	if (p->data == x) {
//		del(p);
//		preT->lchild = NULL;//�ֶ��ÿ�
//		preT->rchild = NULL;
//	}
//	else {
//		if (T->lchild) delXsub(p->lchild,p, x);
//		if (T->rchild) delXsub(p->rchild,p, x);
//
//	}
//}
//int main() {
//	char x, count = 0;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	T->lchild = NULL;
//	T->rchild = NULL;
//	T->data = NULL;
//	struct biTree *r;
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	printf("������ҪѰ�ҵ�xֵ��x=");
//	scanf("%c", &x);
//	delXsub(T,T, x);
//	inOrder(T);
//	return 0;
//}