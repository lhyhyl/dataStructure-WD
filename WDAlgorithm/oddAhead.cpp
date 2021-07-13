///*
//	设计一个算法：将顺序表中的奇数全部移到偶数前面（时间最少，空间最少）
//			分析：这里要求时空皆最少，所以不会使用到辅助空间，时间复杂度应为O（n）。其实我们可以一次遍历便可做到该要求
//				  我们可以设计一个变量k=0，然后进行遍历，每当遇到一个奇数，便把奇数与k所对应的元素对调，k进行加一操作
//
//				  书上采用的是快速排序，我没想到哈哈哈
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void oddAHead(int *arr, int len) {
//	int k = 0;
//	for (int i = 0; i < len; i++) {
//		if (arr[i] % 2) {
//			swap(arr[i], arr[k++]);
//		}
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	oddAHead(arr,9);
//	return 0;
//}