///*
//	������Ժ����ֵܱ�ʾ���洢��ɭ�ֵ�Ҷ�ӽ����
//	������
//			���ǿ�������һ���ڵ�����������ӣ���ô���ݺ����ֵܱ�ʾ���Ĺ�������һ������Ҷ�ڵ㣬�෴���û�����ӣ���ô
//			��һ����Ҷ�ӽ�㣬���Һ��Ӽ������ֵܣ�ͬ��Ӧ������ȥ�жϡ�
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
//int frostLeaf(Tree *T) {
//	if (!T) {//���򷵻�0��Ҳ�ǵݹ�ĳ���
//		return 0;
//	}
//	else {
//		if (!T->fch) {//û�����ӣ��ýڵ�ΪҶ�ӽ��
//			return 1 + frostLeaf(T->nsib);
//		}
//		else {//�����ӣ��ýڵ㲻��Ҷ�ӽ��
//			return frostLeaf(T->fch) + frostLeaf(T->nsib);
//		}
//	}
//}
//int main() {
//	Tree *T = (Tree *)malloc(sizeof(Tree));
//	T = create(T);
//	printf("��ɭ�ֵ�Ҷ�ӽ�����Ϊ��%d", frostLeaf(T));
//	return 0;
//}