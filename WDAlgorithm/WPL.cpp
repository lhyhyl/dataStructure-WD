///*
//	�������Ĵ�Ȩ·�����ȣ�WPL���Ƕ�����������Ҷ�ڵ�Ĵ�Ȩ·������֮�͡�����һ�Ŷ�����T,���ö�������洢���ڵ�ṹΪ
//	left weight right
//	�������T��WPL���㷨
//	������
//		�������Ȩ·�����ȣ�����Ҫ֪��Ҷ�ڵ��Ȩֵ��Ҳ��Ҫ֪���侭����·�������ǿ�������һ������depth������ȣ�Ҳ����
//		·�����ȣ�����һ����̬����weight�ۼӴ�Ȩ·������ʹ�õ��ݹ顣
//*/
//struct tree {
//	int weight;
//	struct tree *left, *right;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//tree *create(tree *T) {//����һ�Ŷ�����
//	int weight;
//	printf("�����뵱ǰ�ڵ�Ȩֵ��weight=");
//	scanf("%d", &weight);
//	getchar();
//	if (weight != -1) {
//		T = (tree *)malloc(sizeof(tree));
//		T->weight = weight;
//		T->left = NULL;
//		T->right = NULL;
//		T->left = create(T->left);
//		T->right = create(T->right);
//	}
//	return T;
//}
//int countWPL(tree *T, int depth) {
//	static int totalWeight = 0;//���þ�̬����
//	if (T) {
//		if (!T->left && !T->right) {//�Ѿ���Ҷ�ڵ�
//			totalWeight += T->weight*depth;//�����Ȩ·��
//		}
//		else {
//			countWPL(T->left, depth + 1);//������
//			countWPL(T->right, depth + 1);//������
//		}
//	}
//	return totalWeight;
//}
//int main() {
//	struct tree *T = (struct tree *)malloc(sizeof(struct tree));
//	T = create(T);
//	int depth = 0;
//	int totalW;
//	totalW = countWPL(T, depth);
//	printf("�ö������Ĵ�Ȩ·������Ϊ��%d", totalW);
//	return 0;
//}