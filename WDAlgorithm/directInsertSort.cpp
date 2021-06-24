///*
//	直接插入排序：
//				从第一个数开始，插入到它前面应该在的位置
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void directInsertSort(int *arr,int len) {
//	for (int i = 0; i < len;i++) {
//		for (int j = 0; j < i;j++) {
//			if (arr[i] < arr[j]) {//此时找到了它的归宿
//				int nowN = arr[i];//将需调换的值暂存
//				for (int k = i-1; k >= j;k--) {//从下标为j的元素开始往后移，腾位置
//					arr[k+1] = arr[k];
//				}
//				arr[j] = nowN;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = {5,3,4,10,8,9,7,12};
//	directInsertSort(arr,8);
//	for (int i = 0; i < 8;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}