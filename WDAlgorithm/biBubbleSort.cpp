///*
//	双向冒泡排序：
//				所谓双向，即两个方向同时进行排序操作，可以在一定程度上降低时间开销。
//				从左向右大值往下沉，从右往左小值往上冒，只需要的遍历次数为元素个数的一半
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void BibubbleSort(int *arr, int len) {
//	int low = 0, high = len - 1;
//	int flag = 1;
//	while (low < high && flag) {//循环条件
//		flag = 0;//标志本轮是否有操作
//		for (int j = low; j < high; j++) {//往下沉
//			if (arr[j] > arr[j + 1]) {//逆序则交换
//				swap(arr[j], arr[j + 1]);
//				flag = 1;
//			}
//			
//		}
//		high--;
//		for (int j = high; j > low; j--) {//往上冒
//			if (arr[j] < arr[j - 1]) {//逆序则交换
//				swap(arr[j], arr[j - 1]);
//				flag = 1;
//			}
//			
//		}
//		low++;
//	}
//
//}
//int main() {
//	int arr[] = { 9,3,4,10,8,5,7,12,10,15 };
//	BibubbleSort(arr, 10);
//	return 0;
//}