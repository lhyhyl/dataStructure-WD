///*
//	折半查找的递归实现
//
//*/
//#include <stdio.h>
//#include<stdlib.h>
//int halfSearch(int *arr, int num, int low, int mid, int high) {
//	if (low > high)return -1;
//	if (num == arr[mid]) {//找到，返回位置
//		return mid;
//	}
//	else if (num > arr[mid]) {
//		return halfSearch(arr, num, mid + 1, (mid + 1 + high) / 2, high);
//	}
//	else {
//		return halfSearch(arr, num, low, (low + mid - 1) / 2, mid - 1);
//	}
//}
//
//
//int main() {
//	int arr[] = { 1,3, 5,9,12,24,25,35,44,54,55 };
//	printf("%d ", halfSearch(arr, 55, 0, 5, 10));
//	return 0;
//}