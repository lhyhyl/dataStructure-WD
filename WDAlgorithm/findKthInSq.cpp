///*
//	编写一个算法，使之能够在数组中找到第k小的元素
//	分析：我们可以采用先排序的方式，但这样时间复杂度偏高；这里我们采用快速排序来进行思考，我们知道快速排序每一趟会确定一个元素的最终
//	位置，假设为m，
//				若m=k，那么此时便找到了第k小的元素
//				若m<k,说明第k小的元素还在m的右半部分，继续查找第 k-m小元素
//				若m>k，说明第k小的元素在m的左半部分，继续查找第k小元素
//				该算法的平均时间复杂度为O（n）
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
//int quickSort(int *arr, int low, int high, int k) {
//	if (low < high) {
//		int pivotPos = partition(arr, low, high);
//		if (pivotPos == k)return  arr[pivotPos];
//		if (pivotPos < k)return quickSort(arr, pivotPos + 1, high, k - pivotPos + 1);
//		if (pivotPos > k)return quickSort(arr, low, pivotPos - 1, k);
//
//	}
//}
//int main() {
//	int arr[] = { 1,5,6,3,4,7,11,10 };
//	int value;
//	value = quickSort(arr, 0, 7, 5);
//	printf("%d ", value);
//	return 0;
//}