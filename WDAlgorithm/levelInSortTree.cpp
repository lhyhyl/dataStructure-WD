/*
	���һ���㷨�����ָ���ڵ��ڸ��������������еĲ��
	������
		���ǿ��Ը��ݶ��������������ʣ��Ӹ��ڵ�һֱ���²��ң�ÿ����һ�Σ���α��һ
*/
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
//int findLevel(Tree *T, int p) {
//	static int depth = 1;
//	if (T) {
//		if (T->data < p) {
//			findLevel(T->right, p);
//			depth++;
//		}
//		else if(T->data > p){
//			findLevel(T->left, p);
//			depth++;
//		}
//	}
//	return depth;
//}
//int main() {
//	//����һ�Ŷ���������
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	int p = 9,depth;//�ֶ�ָ���ڵ�ֵ
//	depth = findLevel(T,p);
//	printf("�ýڵ����ڵĲ��Ϊ��%d��",depth);
//	return 0;
//}