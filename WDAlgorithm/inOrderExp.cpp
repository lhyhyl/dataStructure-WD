/*
	�����һ���㷨���������ı��ʽ����ת���ɵȼ۵���׺���ʽ�������
	������
		��Ŀ��Ȼ˵������Ҫ��ȡ�����������������ñ��ʽ����ô��Ҫע��ĵ�������ǵ�����������ӣ����и��ڵ㴦��Ҷ�ӽ��
		������Ҫ������ţ���������ڷ���������ǰ�������ţ����������������������
*/
//struct BTree {
//	char data;
//	struct BTree *left, *right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//BTree *create(BTree *T) {//�������������
//	char data;
//	printf("�����뵱ǰ�ڵ�ֵ��data=");
//	scanf("%c", &data);
//	getchar();
//	if (data != '#') {
//		T = (BTree *)malloc(sizeof(BTree));
//		T->data = data;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//void putInExp(BTree *T,int deep) {
//	if (T==NULL) {
//		return;
//	}
//	if (!T->left&&!T->right) {//��ΪҶ�ڵ㣬ֱ�����������
//		printf("%c",T->data);
//	}
//	else {
//		if (deep > 1) printf("(");//�Ǹ��ڵ㣬���������
//		putInExp(T->left,deep+1);
//		printf("%c",T->data);
//		putInExp(T->right, deep + 1);
//		if (deep > 1) printf(")");
//
//	}
//}
//int main() {
//	struct BTree *T = (BTree *)malloc(sizeof(BTree));
//	T = create(T);
//	printf("��׺���ʽΪ��");
//	putInExp(T,1);
//	return 0;
//}