/*
	归并排序：

*/
#include <stdio.h>
#include <stdlib.h>
static int *arrB = (int *)malloc(sizeof(int *)*20);
void merge(int *arr, int low, int mid, int high) {//一次归并排序
	int k, m, n;
	for (int i = low; i <= high; i++) {
		arrB[i] = arr[i];
	}

	for (m = low, n = mid + 1, k = m; m <= mid && n <= high;) {
		if (arrB[m] <= arrB[n]) {
			arr[k++] = arrB[m++];
		}
		else {
			arr[k++] = arrB[n++];
		}
	}
	while (n <= high)arr[k++] = arrB[n++];
	while (m <= mid)arr[k++] = arrB[m++];
}
void mergeSort(int *arr, int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}
int main() {
	int arr[] = { 1,3,5,62,11,9,7,6,4,3,2,1 };
	mergeSort(arr, 0, 11);
	return 0;
}