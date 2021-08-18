///*
//	快速排序：
//			快速排序是一个典型的递归操作，这里我们描述一下一次快速排序的过程：我们会将数组的首元素作为枢纽元素，分设两个下标，low
//			为左边开始，high从末尾元素开始，先从high开始寻找第一个小于pivot的元素，紧接着从low开始寻找第一个大于pivot的元素，直至low==high
//			然后根据我们返回的pivotpos将数组划分为两个子表，进行递归操作
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int partition(int *arr, int low, int high) {//该函数进行一次快速排序并返回基准元素最终所在位置
//	int pivot = arr[low];//枢纽元素
//	while (low < high) {
//		while (low < high&&arr[high] >= pivot)--high;//从high往下找第一个小于pivot的元素
//		arr[low] = arr[high];//移到low所在的位置
//		while (low < high&&arr[low] <= pivot)++low;//从low往上找第一个大于pivot的元素
//		arr[high] = arr[low];//移到high所在的位置
//	}
//	arr[low] = pivot;
//	return low;//返回存放枢纽的最终位置
//}
//void quickSort(int *arr,int low,int high) {
//	if (low<high) {//子表元素个数大于一个，进行快速排序
//		int pivotPos = partition(arr,low,high);//快速排序一次并获取存放枢纽的最终位置，用于划分子表
//		quickSort(arr,low,pivotPos-1);//左子表
//		quickSort(arr,pivotPos+1,high);//右子表
//	}
//}
//int main() {
//	int arr[] = { 5,3,4,10,6,11,12 };
//	quickSort(arr,0,6);
//	return 0;
//}