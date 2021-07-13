///*
//	编写算法判断一个序列是否是小根堆
//	分析：
//		小根堆的特性就是根节点小于左右孩子结点，对于一个序列我们可以将它看成完全二叉树，依次遍历，对每个节点进行判断
//		若有一个节点小于它的父亲节点则该序列不是小根堆，注意讨论单分支节点
//*/
//
//#include<stdio.h>
//
//bool isMinHeap(int *arr, int len) {
//	if (len % 2 == 0) {//有一个单分支节点
//		if (arr[len - 1] < arr[len / 2 - 1]) {
//			return false;
//		}
//		for (int i = len / 2 - 2; i >= 0;i--) {
//			if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])return false;
//		}
//	}
//	else {
//		for (int i = len / 2 ; i >= 0; i--) {
//			if (arr[i] > arr[2 * i] || arr[i] > arr[2 * i + 1])return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6 ,7};
//	if (isMinHeap(arr, 6)) {
//		printf("是小根堆");
//	}
//	else {
//		printf("不是小根堆");
//	}
//	return 0;
//}