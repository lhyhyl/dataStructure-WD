///*
//	2016年408真题：集合A划分为A1、A2，个数分别为n1、n2，和分别为S1、S2，|n1-n2|最小|S1-S2|最大
//			 分析：|n1-n2|最小，意思就是平分撒；|S1-S2|最大，意思就是把最大的那部分值和最小的那部分值分开
//				   我们可以采用排序的方法，排好序，当然快速排序时间复杂度最低，	然后一分为二，十分的直接明了
//				   但是我们可以利用快速排序的特性，做一些优化：当我们进行一次快速排序后
//								若pivotPos==n/2,则已将最小、最大的n/2元素分开
//								若pivotPos < n/2,则对pivotPos后的元素继续划分
//								若pivotPos > n/2,则对pivotPos前的元素继续划分
//*/
//#include <stdio.h>
//
////进行一次快速排序并返回枢纽位置
//int partition(int *arr, int low, int high) {
//	int pivot = arr[low];
//	while (low < high) {
//		while (low < high && arr[high] >= pivot)--high;
//		arr[low] = arr[high];
//		while (low < high && arr[low] <= pivot)++low;
//		arr[high] = arr[low];
//	}
//	arr[low] = pivot;
//	return low;
//
//}
////快速排序
//void quickSort(int *arr, int low, int high, int mid) {
//	if (low < high) {
//		int pivotPos = partition(arr, low, high);
//		if (pivotPos == mid)return  ;
//		if (pivotPos < mid) quickSort(arr, pivotPos + 1, high, mid);
//		if (pivotPos > mid) quickSort(arr, low, pivotPos - 1, mid);
//
//	}
//}
//int main() {
//	int arr[] = { 1,5,6,3,4,7,11,10 };
//	quickSort(arr, 0, 7, 3);
//
//	return 0;
//}