///*
//	�Ժ����ֵ�����Ϊ�洢�ṹ������Ƶݹ��㷨�����ĸ߶�
//	������
//		���ֻ�и��ڵ㣬��ô�߶�Ϊ1����������ӣ���ô�߶������ӵ���������������������ȡ����ߡ�
//*/
//typedef struct node {
//	char data;
//	node *fch, *nsib;
//}Tree;
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//Tree *create(Tree *T) {//���򴴽�һ�Ŷ�����
//	char data;
//	printf("�����뵱ǰ�ڵ�ֵ��data=");
//	scanf("%c", &data);
//	getchar();
//	if (data != '#') {
//		T = (Tree *)malloc(sizeof(Tree));
//		T->data = data;
//		T->fch = NULL;
//		T->nsib = NULL;
//		T->fch = create(T->fch);
//		T->nsib = create(T->nsib);
//	}
//	return T;
//}
//int getHigh(Tree *T) {
//	int lhigh, rhigh;
//	if (!T) {//�շ��ص�ǰ�߶ȣ����ǵݹ�ĳ���
//		return 0;
//	}
//	else {
//		lhigh = getHigh(T->fch);//��¼�������߶�
//		rhigh = getHigh(T->nsib);//��¼���ֵܵĸ߶ȣ�ע������high�����ټ�һ����Ϊ�������ֵܣ�ƽ��
//		if (lhigh + 1 > rhigh) {
//			return lhigh + 1;
//		}
//		else {
//			return rhigh;
//		}
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	int high = 0;
//	high = getHigh(T);
//	printf("���ĸ߶�Ϊ��%d", high);
//	return 0;
//}