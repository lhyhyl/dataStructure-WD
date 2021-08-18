///*
//	荷兰国旗问题:
//			这里要求时间复杂度为O（n），显然这是排序所无法完成的，所以我们需要另辟蹊径。
//			我们知道，快速排序的一次划分，可以以枢纽为界，左边均小于枢纽值，右边均大于枢纽值，
//			而这里恰好是三种颜色，我们用0代表红色，1代表白色，2代表蓝色，那么如果我们以1位枢纽，
//			进行一次快速排序的过程后，则可以达到要求，其因为我们仅仅遍历了一次数组，时间复杂度
//			为O（n）
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void subQuick(int *arr, int low, int high, int pivotPos) {
//	int pivot = arr[pivotPos];//设置枢纽为1
//	int tmp = arr[pivotPos];
//	arr[pivotPos] = arr[low];
//	arr[low] = tmp;//将枢纽换至第一个元素
//	while (low < high) {
//		while (low < high&&arr[high] >= pivot)--high;
//		arr[low] = arr[high];
//		while (low < high&&arr[low] <= pivot)++low;
//		arr[high] = arr[low];
//	}
//	arr[low] = pivot;
//}
//int main() {
//	int arr[] = { 0,2,1,2,2 };
//	int pos;
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] == 1) {
//			pos = i;
//			break;
//		}
//	}
//	subQuick(arr, 0, 4, pos);
//	return 0;
//}