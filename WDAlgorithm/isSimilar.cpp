///*
//	������ж����ζ������Ƿ����Ƶ��㷨����ν������T1��T2���ƣ�ָ����T1��T2���ǿյĶ�������ֻ��һ�����ڵ㣻���������������
//	������������
//	������
//		���͵�Ҫ��ȡ�ݹ�������
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#include <stdlib.h>
//#include <stdio.h>
//bool isSimilar(biTree *T1, biTree *T2) {
//	if (!T1 && !T2) {//T1,T2���ǿյĶ�����
//		return true;
//	}
//	else if (!T1 || !T2) {//T1,T2ֻ��һ��Ϊ�գ�������
//		return false;
//	}
//	else {
//		if (isSimilar(T1->lchild, T2->lchild) && isSimilar(T1->rchild, T2->rchild))//�������������ƣ�������
//			return true;
//		else
//			return false;
//	}
//
//}
//int main() {
//	struct biTree *T1 = (struct biTree *)malloc(sizeof(struct biTree));
//	struct biTree *T2 = (struct biTree *)malloc(sizeof(struct biTree));
//
//	biTree *create(biTree *);
//	printf("��һ�������ݣ�\n");
//
//	T1 = create(T1);
//	printf("\n");
//	printf("�ڶ��������ݣ�\n");
//	T2 = create(T2);
//
//	isSimilar(T1, T2) ? printf("����") : printf("������");
//	return 0;
//}