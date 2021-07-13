///*
//	计数排序
//		分析：
//			使用辅助空间，通过数组下标来进行一个计数，最终按照数组的值进行输出
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void numSort(int *arr,int len) {
//	int max = arr[0];
//	for (int i = 1; i < len;i++) {//找到最大值，用于确定辅助数组的长度
//		if (max < arr[i]) max = arr[i];
//	}
//	int *arrB = (int *)malloc(sizeof(int )*(max+1));//设置为max+1，因为有0
//	for (int i = 0; i < max + 1;i++) {
//		arrB[i] = 0;//初始化为0
//	}
//	for (int i = 0; i < len;i++) {
//		arrB[arr[i]]++;//遇到什么数就到对应下标加一
//	}
//	for (int i = 0; i < max + 1;i++) {//遍历辅助数组
//		int k = arrB[i];
//		while (k--) {//对应元素是几就打印几次下标，说明该数重复
//			printf("%d ",i);
//		}
//	}
//}
//int main() {
//	int arr[] = {5,3,4,1,7,11,10,25,6,3,4,4,5,5};
//	numSort(arr,14);
//	return 0;
//}