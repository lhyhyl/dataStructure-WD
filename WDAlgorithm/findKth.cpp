///*
//	��дһ���ݹ��㷨����һ����n���ڵ�ġ�������������Ķ����������ϲ��ҵ�kС��Ԫ�أ�������ָ��ýڵ��ָ�룬Ҫ���㷨��ƽ��
//	ʱ�临�Ӷ�ΪO(logn)��������������ÿ���ڵ��г���data��lchild��rchild�����ݳ�Ա�⣬����һ��count��Ա�������Ըýڵ�Ϊ����
//	�����Ľڵ����
//	������
//		����Ҫ��ʱ�临�Ӷ�ΪO(ln)�����ǾͲ��ܲ��ó���ķ����ˣ�����������Ҫ���õݹ��˼�룬����������������
//		һ��t->lchild Ϊ��
//		�����t->rchild �ǿ� �� k=1����ô���ݶ��������������� t��Ϊ��kС
//		�����t->rchild �ǿ� �� k!=1����ô��kС�����϶�����������
//		�������t->lchild �ǿ�
//		�����t->lchild->count ==k-1,��ôt��Ϊ��kС
//		�����t->lchild->count > k-1,��ô��kС��������
//		�����t->lchild->count < k-1,��ô��kС����������Ѱ�ҵ�k-(t->lchild->count +1)С��Ԫ��
//
//		�������ǵ�����ڶ�����ķ��������Ǻ����׾���©ĳЩ��������´����߼������⣬��Ҫע��
//
//
//*/
//
//typedef struct node {
//	int data;
//	int count;//�����ڵ����
//	struct node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//Tree *create(Tree *T) {//���򴴽�һ�����������
//	int data;
//	printf("�����뵱ǰ�ڵ�ֵ��data=");
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
//int getCount(Tree *T) {//ͳ��ÿ���ڵ������Ϊ���������Ľڵ����
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
//		printf("�� %d С�Ľڵ�ֵΪ %d",k,p->data);
//	}
//	return 0;
//}