/*
	����˳��洢����һ��������������Ҫ��һ����ͨ����ת����һ����ȫ���������������ڵĽڵ���9999����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void createBiTree(int *arr,int count) {
	int i = 1,data;
	//int *arr = (int *)malloc(sizeof(int)*(count+2));//�±�Ϊ0���ǲ��棬���Ҫ�н�����ʶ��
	while (count--) {
		printf("�������%d���ڵ�:",i);
		scanf("%d",&data);
		*(arr + i) = data;
		i++;
	}
}
