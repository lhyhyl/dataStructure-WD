///*
//	��дһ���㷨�жϸ����Ķ������Ƿ��Ƕ���������
//	������
//		�������������ص���ǣ����ڵ��ֵ���������󣬱�������С�����ǿ���ÿ�η���һ���ڵ�ʱ���ֱ��ҵ��������������ֵ����������
//		��Сֵ�����С�����������ֵ��������������Сֵ������жϸ������Ƕ�����������
//*/
//typedef struct node {
//	int data;
//	node *left, *right;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
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
//int getMax(Tree *T) {
//	if (T) {
//		static int max = T->data;
//		if (T->left&&max < T->left->data) {
//			max = T->left->data;
//		}
//		if (T->right&&max < T->right->data) {
//			max = T->right->data;
//		}
//		getMax(T->left);
//		getMax(T->right);
//		return max;
//	}
//	return -1;
//}
//int getMin(Tree *T) {
//	if (T) {
//		static int min = T->data;
//		if (T->left&&min > T->left->data) {
//			min = T->left->data;
//		}
//		if (T->right&&min > T->right->data) {
//			min = T->right->data;
//		}
//		getMin(T->left);
//		getMin(T->right);
//		return min;
//	}
//	return 9999;
//}
//bool isSort(Tree *T) {
//	if (!T || !T->left && !T->right) {//������ֻ�и��ڵ��Ƕ���������
//		return true;
//	}
//	if (T->data < getMax(T->left)) {//�����ǰ�ڵ�С�����������ڵ㣬���Ƕ���������
//		return false;
//	}
//	if (T->data > getMin(T->right)) {//�����ǰ�ڵ������������С�ڵ㣬���Ƕ���������
//		return false;
//	}
//	return isSort(T->left)&& isSort(T->right);//�ж�������//�ж�������
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	isSort(T) ? printf("�Ƕ���������"): printf("���Ƕ���������");
//	return 0;
//}