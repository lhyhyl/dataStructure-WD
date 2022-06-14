///*
//	线性表递增有序存放，设计一算法，用最少的时间查找值为x的元素，
//	若找到则将其与后续元素位置相交换，否则，插入使其仍然有序
//
//	分析：
//		题目告知这是一个递增有序表，要使时间最少，我们可以采取折半查找的方式，这样比顺序查找省时
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int findAndExchange(int* arr, int n, int len) {//返回数组长度
//	int low = 0, high = len, middle;
//	while (low <= high && (middle = (low + high) / 2)) {
//		if (n == arr[middle])break;
//		if (n < arr[middle]) {
//			high = middle - 1;
//		}
//		else {
//			low = middle + 1;
//		}
//	}
//	if (low > high) {//未找到，插入
//		int i;
//		for (i = len - 1; i > high; i--) {//元素所在位置及其之后的元素后移
//			*(arr + i + 1) = *(arr + i);
//		}
//		*(arr + i + 1) = n;
//		return len + 1;
//	}
//	else {//找到，对调
//		int tmp = *(arr + middle);
//		*(arr + middle) = *(arr + middle + 1);
//		*(arr + middle + 1) = tmp;
//		return len;
//	}
//}
//int main() {
//	int arr[10] = { 1,3,5,6,9,12,45,78 };
//	int n, len;
//	printf("请输入你要查找的元素，n=");
//	scanf("%d", &n);
//	len = findAndExchange(arr, n, 8);
//	for (int i = 0; i < len; i++) printf("%d ", *(arr + i));
//	return 0;
//}