///*
//	��дһ���㷨�жϸ����Ķ������Ƿ��Ƕ���������
//	������
//		�����������������������������У����ǿ��Ը�����һ�����������ж�
//*/
//typedef struct node {
//	int data;
//	node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//Tree *create(Tree *T) {//���򴴽�һ�Ŷ�����
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
//bool isSortTree(Tree *T) {
//	static int min = -32768;//�ʼ�趨minΪ��Сֵ��ȷ����һ���ڵ��ܹ�������ȥ
//	static bool flag = true;//��Ϊ�Ƿ�������ı�ǣ����þ�̬��������Ȼÿ�ζ����ʼ��
//	if (T) {
//		isSortTree(T->left);
//		if (T->data < min)
//			flag = false;
//		else
//			min = T->data;//min 1
//		isSortTree(T->right);
//	}
//	return flag;
//}
//int main() {
//	//�ȴ���һ�Ŷ�����
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	isSortTree(T) ? printf("�Ƕ���������") : printf("���Ƕ���������");
//	return 0;
//}