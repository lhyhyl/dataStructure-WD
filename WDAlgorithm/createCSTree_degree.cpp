///*
//	�����������Ĳ�α�������ڵ���������캢���ֵ�����
//	������
//		������Ƶ���α��������к���-�ֵ�������Ϊ���ӡ����ǿ�������һ������Ϊ���ڵ�����飬
//		������������������ֵ�ŵ��������У��������нڵ��fch��subֵΪ��
//		Ȼ��һ��ȥ�����ڵ㣬ȡ������d����d>0,˵���ýڵ��к��ӣ�����һ�����ӷŵ���ָ��fch����������
//		һ�ηŵ�sub�У�ע��������б仯������������˵
//*/
//typedef struct node {
//	char data;
//	node *fch, *nsib;
//}Tree;
//#include<stdio.h>
//#include <stdlib.h>
//void createCSTree_degree(char *level, int *degree, node **pointer, int n) {
//	int k = 0;
//	for (int i = 0; i < n; i++) {//��ʼ��pointer
//		pointer[i]->data = level[i];
//		pointer[i]->fch = NULL;
//		pointer[i]->nsib = NULL;
//	}
//	for (int i = 0; i < n; i++) {
//		int d = degree[i];
//		if (d) {
//			k++;//kΪ��Ů�ڵ����
//			pointer[i]->fch = pointer[k];
//			for (int j = 2; j <= d; j++) {
//				k++;
//				pointer[k - 1]->nsib = pointer[k];
//			}
//		}
//	}
//
//}
//void inOrder(node *T) {
//	if (T) {
//		inOrder(T->fch);
//		printf("%c ", T->data);
//		inOrder(T->nsib);
//	}
//};
//int main() {
//	char level[5] = { 'A','B','E','G','D' };//��α�����������洢
//	int degree[] = { 3,1,0,0,0 };
//	node* *pointer = (node* *)malloc(sizeof(node*) * 5);
//	for (int i = 0; i < 5; i++) {
//		pointer[i] = (node*)malloc(sizeof(node*));
//	}
//	createCSTree_degree(level, degree, pointer, 5);
//	inOrder(pointer[0]);
//}