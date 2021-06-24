/*
	希尔排序：
			直接插入排序的改进版本，初始时会有一个排序增量，通常为数组长度的一半，按此增量进行直接插入排序，每轮操作后将增量/2，
			直至增量为一，此时相当于进行一次原始直接插入排序
*/
#include <stdio.h>
#include <stdlib.h>

void shellSort(int *arr, int len) {
	int d = len / 2;
	for (int i = 0; i < d; i + d) {
		for (int j = 0; j < i;j+d) {
			int nowN = arr[i];
			if (arr[i]<arr[j]) {
				for (int k = i - d; k > j - d;k--) {
					arr[k + d] = arr[k];
				}
				arr[j] = nowN;
			}
		}
		d = d / 2;
	}

}
int main() {
	int arr[] = { 5,3,4,10,8,9,7,12 ,10,15 };

	shellSort(arr, 10);
	return 0;
}