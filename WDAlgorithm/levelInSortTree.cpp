///*
//	���һ���㷨�����ָ���ڵ��ڸ��������������еĲ��
//	������
//		���ǿ��Ը��ݶ��������������ʣ��Ӹ��ڵ�һֱ���²��ң�ÿ����һ�Σ���α��һ
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
//void findLevel(Tree *T, int p,int &depth) {
//	if (T) {
//		if (T->data < p) {
//			depth++;
//			findLevel(T->right, p,depth);
//		}
//		else if(T->data > p){
//			depth++;
//			findLevel(T->left, p,depth);
//		}
//	}
//}
//int main() {
//	//����һ�Ŷ���������
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	int p = 7,depth=1;//�ֶ�ָ���ڵ�ֵ
//	findLevel(T,p,depth);
//	printf("�ýڵ����ڵĲ��Ϊ��%d��",depth);
//	return 0;
//}