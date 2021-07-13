///*
//	希尔排序：
//			直接插入排序的改进版本，初始时会有一个排序增量，通常为数组长度的一半，按此增量进行直接插入排序，每轮操作后将增量/2，
//			直至增量为一，此时相当于进行一次原始直接插入排序
//*/
//#include <stdio.h>
//#include <stdlib.h>
//
//void shellSort(int *arr, int len) {
//	int d = len / 2;
//	while (d >= 1) {
//		for (int i = 0; i < d; i++) {//对于d增量内的每一个元素直接插入排序
//			for (int j = i + d; j < len; j += d) {//按增量寻找是否存在逆序元素
//				if (arr[j] < arr[j - d]) {//找到了逆序元素
//					int numK = arr[j], k;//将该值暂存于numK
//					for (k = j;numK < arr[k - d]; k -= d) {//按d增量向后移元素，判断依据是前面的元素都大于找到的逆序元素
//						arr[k] = arr[k - d];
//					}
//					arr[k] = numK;//最后将逆序元素归位，而位置就是k
//				}
//
//			}
//		}
//		d = d / 2;
//	}
//
//
//}
//int main() {
//	int arr[] = { 9,3,4,10,8,5,7,12,10,15 };
//
//	shellSort(arr, 10);
//	return 0;
//}