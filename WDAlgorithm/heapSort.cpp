///*
//	堆排序：我们可以将堆分为大根堆与小根堆其特性是根节点均大于左右孩子结点（大根堆），或根节点均小于左右孩子结点
//			这样我们便可以每次输出根节点，再把最后一个元素放到堆顶，进而重新构造一个堆
//*/
//#include <stdio.h>
//void swap(int &a, int &b) {//交换函数
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void heapAdjust(int *arr,int k, int len) {//堆的调整,将传入的以k为根节点的子树调整为大根堆
//	arr[0] = arr[k];//暂存arr[k]
//	for (int i = 2 * k; i <= len;i*=2) {
//		if (i < len&&arr[i] < arr[i + 1])//如果右孩子更大，i指向右孩子
//			i++;
//		if (arr[0] >= arr[i]) break;
//		else {
//			arr[k] = arr[i];
//			k = i;//继续向下调整
//		}
//	}
//	arr[k] = arr[0];
//}
//void buildMaxHeap(int *arr,int len) {//初始建堆
//	for (int i = len / 2; i > 0;i--) {
//		heapAdjust(arr,i,len);
//	}
//}
//void heapSort(int *arr, int len) {
//	buildMaxHeap(arr,len);//建堆
//	for (int i = len; i >= 1;i--) {
//		printf("%d ",arr[1]);
//		swap(arr[i],arr[1]);//堆底弄上去
//		heapAdjust(arr,1,i-1);//把剩余的元素排成堆
//	}
//}
//int main() {
//	int arr[] = { 0,9,3,4,10 };
//	heapSort(arr,4);
//	return 0;
//}