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
//	int k = 0;//�жϵ����ĸ��ڵ�
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
//			for (int j = 0; j < d - 1; j++) {
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
//	char level[6] = { 'A','B','E','G','D','F' };//��α�����������洢
//	int degree[] = { 3,2,0,0,0,0 };
//	node* *pointer = (node* *)malloc(sizeof(node*) * 6);
//	for (int i = 0; i < 6; i++) {
//		pointer[i] = (node*)malloc(sizeof(node));
//	}
//	createCSTree_degree(level, degree, pointer, 6);
//	inOrder(pointer[0]);
//}