///*
//	2016��408���⣺����A����ΪA1��A2�������ֱ�Ϊn1��n2���ͷֱ�ΪS1��S2��|n1-n2|��С|S1-S2|���
//			 ������|n1-n2|��С����˼����ƽ������|S1-S2|�����˼���ǰ������ǲ���ֵ����С���ǲ���ֵ�ֿ�
//				   ���ǿ��Բ�������ķ������ź��򣬵�Ȼ��������ʱ�临�Ӷ���ͣ�	Ȼ��һ��Ϊ����ʮ�ֵ�ֱ������
//				   �������ǿ������ÿ�����������ԣ���һЩ�Ż��������ǽ���һ�ο��������
//								��pivotPos==n/2,���ѽ���С������n/2Ԫ�طֿ�
//								��pivotPos < n/2,���pivotPos���Ԫ�ؼ�������
//								��pivotPos > n/2,���pivotPosǰ��Ԫ�ؼ�������
//*/
//#include <stdio.h>
//
////����һ�ο������򲢷�����Ŧλ��
//int partition(int *arr, int low, int high) {
//	int pivot = arr[low];
//	while (low < high) {
//		while (low < high && arr[high] >= pivot)--high;
//		arr[low] = arr[high];
//		while (low < high && arr[low] <= pivot)++low;
//		arr[high] = arr[low];
//	}
//	arr[low] = pivot;
//	return low;
//
//}
////��������
//void quickSort(int *arr, int low, int high, int mid) {
//	if (low < high) {
//		int pivotPos = partition(arr, low, high);
//		if (pivotPos == mid)return  ;
//		if (pivotPos < mid) quickSort(arr, pivotPos + 1, high, mid);
//		if (pivotPos > mid) quickSort(arr, low, pivotPos - 1, mid);
//
//	}
//}
//int main() {
//	int arr[] = { 1,5,6,3,4,7,11,10 };
//	quickSort(arr, 0, 7, 3);
//
//	return 0;
//}