///*
//	������������:
//			����Ҫ��ʱ�临�Ӷ�ΪO��n������Ȼ�����������޷���ɵģ�����������Ҫ����辶��
//			����֪�������������һ�λ��֣���������ŦΪ�磬��߾�С����Ŧֵ���ұ߾�������Ŧֵ��
//			������ǡ����������ɫ��������0�����ɫ��1�����ɫ��2������ɫ����ô���������1λ��Ŧ��
//			����һ�ο�������Ĺ��̺�����ԴﵽҪ������Ϊ���ǽ���������һ�����飬ʱ�临�Ӷ�
//			ΪO��n��
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void subQuick(int *arr, int low, int high, int pivotPos) {
//	int pivot = arr[pivotPos];//������ŦΪ1
//	int tmp = arr[pivotPos];
//	arr[pivotPos] = arr[low];
//	arr[low] = tmp;//����Ŧ������һ��Ԫ��
//	while (low < high) {
//		while (low < high&&arr[high] >= pivot)--high;
//		arr[low] = arr[high];
//		while (low < high&&arr[low] <= pivot)++low;
//		arr[high] = arr[low];
//	}
//	arr[low] = pivot;
//}
//int main() {
//	int arr[] = { 0,2,1,2,2 };
//	int pos;
//	for (int i = 0; i < 5; i++) {
//		if (arr[i] == 1) {
//			pos = i;
//			break;
//		}
//	}
//	subQuick(arr, 0, 4, pos);
//	return 0;
//}