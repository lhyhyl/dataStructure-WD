///*
//	��֪һ�ζ�������˳��洢�ṹ���д洢�����һ���㷨�����ŷֱ�Ϊi��j�������ڵ������Ĺ������Ƚڵ��ֵ
//	������
//		��������洢һ�Ŷ�������һ����˵���������ַ�ʽ�洢һ����ȫ�����������˷ѿռ�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int findCommonAncestor(int *arr,int i,int j) {
//	while (i!=j) {
//		i > j ? i = i / 2: j = j / 2;
//	}
//	return *(arr + i);
//}
//int main() {
//	void createBiTree(int *,int);
//	int count,i,j;
//	printf("��������Ҫ�����Ķ���������ת��Ϊ��ȫ�����������ٽڵ�����count=");
//	scanf("%d",&count);
//	int *arr = (int *)malloc(sizeof(int)*(count + 2));//�±�Ϊ0���ǲ���
//	createBiTree(arr,count);
//	printf("������Ҫ���ҹ����ڵ�������ڵ�ı��,���<=%d:\n",count);
//	printf("i=");
//	scanf("%d",&i);
//	printf("\n");
//	printf("j=");
//	scanf("%d", &j);
//	while (i>count || j>count || *(arr+i)==9999||*(arr+j)==9999 ){
//		printf("����������������룺\n");
//		printf("i=");
//		scanf("%d", &i);
//		printf("\n");
//		printf("j=");
//		scanf("%d", &j);
//	}
//	count = findCommonAncestor(arr,i,j);
//	printf("�������ȵ�ֵΪ:%d",count);
//	return 0;
//}