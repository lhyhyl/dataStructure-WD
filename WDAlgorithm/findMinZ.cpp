///*
//	Ѱ��������δ�����ֵ���С������
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int findMinZ(int *arr,int n,int len) {//����������Ԫ�غ����ֵ�����鳤��
//	int j;
//	int* arrB = (int*)malloc(n);//�½�һ������arrB
//	for (int i = 0; i < n;i++) {
//		arrB[i] = 0;//�������ʼ��Ϊ0
//
//	}
//
//	for (int i = 0; i < len;i++) {
//		if (arr[i] > 0) {
//			arrB[arr[i]] = 1;//����Ӧ�±��Ԫ����λ1
//		}
//	}
//	for (j = 1; j <= n;j++) {
//		if (arrB[j] == 0) return j;//����arrB���ҵ���һ��Ԫ��Ϊ0���±꣬�����±꣬��Ϊ��С������
//	}
//	if (j == n)return j + 1;
//
//}
//int main() {
//	int arr[] = { 1,2,3 };
//	int min = findMinZ(arr,3,3);
//	return 0;
//}