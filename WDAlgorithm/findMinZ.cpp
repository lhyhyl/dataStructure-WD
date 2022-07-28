///*
//	寻找序列中未曾出现的最小正整数
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int findMinZ(int *arr,int n,int len) {//传入数组首元素和最大值及数组长度
//	int j;
//	int* arrB = (int*)malloc(n);//新建一个数组arrB
//	for (int i = 0; i < n;i++) {
//		arrB[i] = 0;//将数组初始化为0
//
//	}
//
//	for (int i = 0; i < len;i++) {
//		if (arr[i] > 0) {
//			arrB[arr[i]] = 1;//将对应下标的元素置位1
//		}
//	}
//	for (j = 1; j <= n;j++) {
//		if (arrB[j] == 0) return j;//遍历arrB，找到第一个元素为0的下标，返回下标，即为最小正整数
//	}
//	if (j == n)return j + 1;
//
//}
//int main() {
//	int arr[] = { 1,2,3 };
//	int min = findMinZ(arr,3,3);
//	return 0;
//}