/*
	Ѱ��������δ�����ֵ���С������
*/
#include <stdio.h>
#include <stdlib.h>

int findMinZ(int *arr,int n,int len) {//����������Ԫ�غ����ֵ�����鳤��

	int* arrB = (int*)malloc(n);//�½�һ������arrB
	for (int i = 0; i < n;i++) {
		arrB[i] = 0;//�������ʼ��Ϊ0

	}

	for (int i = 0; i < len;i++) {
		if (arr[i] > 0) {
			arrB[arr[i]] = 1;//����Ӧ�±��Ԫ����λ1
		}
	}
	for (int i = 1; i < n;i++) {
		if (arrB[i] == 0) return i;//����arrB���ҵ���һ��Ԫ��Ϊ0���±꣬�����±꣬��Ϊ��С������
	}

}
int main() {
	int arr[] = { 2,5,8,7 };
	int min = findMinZ(arr,8,4);
	return 0;
}