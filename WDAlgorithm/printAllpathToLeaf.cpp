///*
//	��д�㷨��ӡ�Ӹ��ڵ㵽����Ҷ�ӽ���·��
//	�㷨˼�룺���õݹ��ջ����ȡ������ȱ���������Ҷ�ӽ��ʱ�ʹ�ӡջ��Ԫ��
//*/
//struct biTree {//���Ľṹ��
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void printAllpath(biTree *T, char *path, int len) {
//	path[len] = T->data;
//	if (!T->lchild && !T->rchild) {
//		for (int i = 0; i <= len; i++) {
//			printf("%c ", path[i]);//��ӡ·��
//		}
//		printf("\n");
//	}
//	else {
//		if (T->lchild) {
//			printAllpath(T->lchild, path, len + 1);
//		}
//		if (T->rchild) {
//			printAllpath(T->rchild, path, len + 1);
//		}
//
//	}
//}
//int main() {
//	int count = 0;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//	T = create(T);//����һ�Ŷ�����
//	char *path = (char*)malloc(sizeof(char) * 10);
//	printAllpath(T, path, 0);
//	return 0;
//}