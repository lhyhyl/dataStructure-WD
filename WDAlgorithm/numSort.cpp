///*
//	��������
//		������
//			ʹ�ø����ռ䣬ͨ�������±�������һ�����������հ��������ֵ�������
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void numSort(int *arr,int len) {
//	int max = arr[0];
//	for (int i = 1; i < len;i++) {//�ҵ����ֵ������ȷ����������ĳ���
//		if (max < arr[i]) max = arr[i];
//	}
//	int *arrB = (int *)malloc(sizeof(int )*(max+1));//����Ϊmax+1����Ϊ��0
//	for (int i = 0; i < max + 1;i++) {
//		arrB[i] = 0;//��ʼ��Ϊ0
//	}
//	for (int i = 0; i < len;i++) {
//		arrB[arr[i]]++;//����ʲô���͵���Ӧ�±��һ
//	}
//	for (int i = 0; i < max + 1;i++) {//������������
//		int k = arrB[i];
//		while (k--) {//��ӦԪ���Ǽ��ʹ�ӡ�����±꣬˵�������ظ�
//			printf("%d ",i);
//		}
//	}
//}
//int main() {
//	int arr[] = {5,3,4,1,7,11,10,25,6,3,4,4,5,5};
//	numSort(arr,14);
//	return 0;
//}