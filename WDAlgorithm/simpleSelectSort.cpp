///*
//	简单选择排序：
//			每次选择一个目前最小的元素归位
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int& a, int& b) {
//	int temp = b;
//	b = a;
//	a = temp;
//}
//void simpleSelectSort(int* arr, int len) {
//	for (int i = 0; i < len - 1; i++) {//只需要len-1趟遍历
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