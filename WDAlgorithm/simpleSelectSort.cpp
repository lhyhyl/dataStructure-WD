///*
//	��ѡ������
//			ÿ��ѡ��һ��Ŀǰ��С��Ԫ�ع�λ
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int& a, int& b) {
//	int temp = b;
//	b = a;
//	a = temp;
//}
//void simpleSelectSort(int* arr, int len) {
//	for (int i = 0; i < len - 1; i++) {//ֻ��Ҫlen-1�˱���
//		int min = i;
//		for (int j = i + 1; j < len; j++) {
//			if (arr[j] < arr[min]) {
//				min = j;
//			}
//		}
//		if (min != i)swap(arr[min], arr[i]);
//
//	}
//
//}
//int main() {
//	int arr[10] = { 9,3,4,10,8,5,7,12,10,15 };
//	simpleSelectSort(arr, 10);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}