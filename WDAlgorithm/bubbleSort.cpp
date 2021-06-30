///*
//	冒泡排序：
//			依次比较两相邻的元素值，逆序则交换
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void bubbleSort(int *arr, int len) {
//
//	for (int i = 0; i < len-1; i++) {//只需要len-1趟遍历
//		int flag = 0;//标志本轮是否有操作
//		for (int j = 0; j < len - 1; j++) {
//			int tmp;
//			if (arr[j] > arr[j + 1]) {//逆序则交换
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//			if (!flag) {
//				break;
//			}
//		}
//
//	}
//
//}
//int main() {
//	int arr[] = { 9,3,4,10,8,5,7,12,10,15 };
//	bubbleSort(arr, 10);
//	return 0;
//}