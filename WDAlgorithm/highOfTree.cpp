/*
	�Ժ����ֵ�����Ϊ�洢�ṹ������Ƶݹ��㷨�����ĸ߶�
	������
		���ֻ�и��ڵ㣬��ô�߶�Ϊ1����������ӣ���ô�߶������ӵ���������������������ȡ����ߡ�
*/
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
//int getHigh(Tree *T,int high) {
//	if (!T) {//�շ��ص�ǰ�߶ȣ����ǵݹ�ĳ���
//		return high;
//	}
//	else {
//		int lhigh = getHigh(T->fch,high+1);//��¼�������߶�
//		int rhigh = getHigh(T->nsib,high);//��¼���ֵܵĸ߶ȣ�ע������high�����ټ�һ����Ϊ�������ֵܣ�ƽ��
//		lhigh > rhigh ? high = lhigh : high = rhigh;//ȡ�����
//		return high;
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree *));
//	T = create(T);
//	int high = 0;
//	high = getHigh(T,high);
//	printf("���ĸ߶�Ϊ��%d",high);
//	return 0;
//}