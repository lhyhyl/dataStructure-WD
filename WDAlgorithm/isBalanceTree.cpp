///*
//	���ö�����������˼���дһ���ж϶������Ƿ��Ƕ���ƽ�������㷨
//	������
//		���ǿ��Բ�ȡ�����������ɸ��㷨����Ϊ����������Ậ���ظ����㡣
//		���Ƕ�ÿһ���ڵ�����жϣ��������������ƽ�������������߶Ȳ�С�ڵ���1����ýڵ�ƽ��
//
//*/
//struct Tree {
//	int data;
//	Tree *left, *right;
//};
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
//bool isAVL(Tree *T, int *depth) {
//	if (!T) {//�սڵ㣬Ϊƽ�������
//		*depth = 0;
//		return true;
//	}
//	int left = 0, right = 0;
//	if (isAVL(T->left, &left) && isAVL(T->right, &right)) {//�ж����������Ƿ�Ϊƽ�������
//		int diff = left - right;//���������ĸ߶Ȳ�
//		if (abs(diff) <= 1) {//����С�ڵ���1,�Ǿ���ƽ�������
//			*depth	= (1 + (left > right ? left : right));
//			return true;
//		}
//	}
//	return false;//ǰ��һֱδ����true���ǾͲ���ƽ�������
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);//����һ�Ŷ�����
//	int depth = 0;
//	isAVL(T, &depth) ? printf("�Ƕ���ƽ����"):printf("���Ƕ���ƽ����");
//	return 0;
//}