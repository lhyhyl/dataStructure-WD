///*
//	�����������ȡ��������洢�ṹ�洢�������һ���㷨������һ�Ÿ����Ķ��������е�˫��֧�ڵ����
//	������
//		��ʵ���������������ʮ���ʺϵݹ飬��������ͬ�����Բ�ȡ�ݹ������������ͳ��˫��֧�ڵ�ĸ�������������������
//		�ʼ�㶨��һ����̬�������ݹ���ڼ��������Һ��ӡ�
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//int doubleNode(biTree *T) {
//	static int num = 0;//ע������һ��Ҫʹ�þ�̬��������Ȼÿһ�ν���ݹ鶼���ʼ��num
//	if (!T)num = 0;
//	if (T->lchild&&T->rchild) {
//		num++;
//		doubleNode(T->lchild);
//		doubleNode(T->rchild);
//	}
//	else {
//		if (T->lchild)doubleNode(T->lchild);
//		if (T->rchild)doubleNode(T->rchild);
//	}
//	return num;
//}
//int main() {
//	int num;
//	biTree *T = (biTree*)malloc(sizeof(biTree));
//	biTree *create(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	num = doubleNode(T);
//	printf("�ö������е�˫��֧�ڵ�����У�%d",num);
//	return 0;
//}