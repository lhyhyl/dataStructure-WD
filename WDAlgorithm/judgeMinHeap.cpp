///*
//	��д�㷨�ж�һ�������Ƿ���С����
//	������
//		С���ѵ����Ծ��Ǹ��ڵ�С�����Һ��ӽ�㣬����һ���������ǿ��Խ���������ȫ�����������α�������ÿ���ڵ�����ж�
//		����һ���ڵ�С�����ĸ��׽ڵ�������в���С���ѣ�ע�����۵���֧�ڵ�
//*/
//
//#include<stdio.h>
//
//bool isMinHeap(int *arr, int len) {
//	if (len % 2 == 0) {//��һ������֧�ڵ�
//		if (arr[len ] < arr[len / 2 ]) {
//			return false;
//		}
//		for (int i = len / 2 -1; i > 0;i--) {
//			if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])return false;
//		}
//	}
//	else {
//		for (int i = len / 2 ; i > 0; i--) {
//			if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int arr[] = { 0,1,2,3,4,8,6,7};
//	if (isMinHeap(arr, 7)) {
//		printf("��С����");
//	}
//	else {
//		printf("����С����");
//	}
//	return 0;
//}