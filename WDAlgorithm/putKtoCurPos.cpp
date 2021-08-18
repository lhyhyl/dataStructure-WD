/*
	有一数组存放着无序序列K1,K2,K3,...,Kn，现要求将Kn放在将元素排序后的正确位置上，试编写实现该功能的算法
	要求比较关键字的次数不超过n。
	分析：
		这里要求比较关键字的次数不超过n，就不能用复杂度为n²的排序算法，而且我们要用能够确定元素位置的排序算法，
		所以我们首选快速排序
		快速排序每一次可以确定一个元素的最终位置，这里我们既然要确定Kn的位置，那我们就把Kn最为枢纽元素，进行一次快速
		排序，	Kn的位置也就确定了
*/
#include <stdio.h>

void putKtoCurPos(int *arr, int low, int high) {
	int pivot = arr[high];//将Kn作为枢纽
	while (low < high) {
		while (arr[low] <= pivot)++low;
		arr[high] = arr[low]; 
		while (arr[high] >= pivot)--high;
		arr[low] = arr[high];
	}
	arr[low] = pivot;
}
int main() {
	int arr[] = {2,5,4,1,3,11,5,8,4,6};
	putKtoCurPos(arr,0,9);
	for (int i = 0; i < 10;i++) {
		printf("%d ",arr[i]);
	}
	return 0;
}