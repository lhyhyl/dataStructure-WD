///*
//	��дһ���㷨��ʹ֮�ܹ����������ҵ���kС��Ԫ��
//	���������ǿ��Բ���������ķ�ʽ��������ʱ�临�Ӷ�ƫ�ߣ��������ǲ��ÿ�������������˼��������֪����������ÿһ�˻�ȷ��һ��Ԫ�ص�����
//	λ�ã�����Ϊm��
//				��m=k����ô��ʱ���ҵ��˵�kС��Ԫ��
//				��m<k,˵����kС��Ԫ�ػ���m���Ұ벿�֣��������ҵ�kСԪ��
//				��m>k��˵����kС��Ԫ����m����벿�֣��������ҵ�kСԪ��
//				���㷨��ƽ��ʱ�临�Ӷ�ΪO��n��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
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
//int quickSort(int *arr, int low, int high, int k) {
//	if (low < high) {
//		int pivotPos = partition(arr, low, high);
//		if (pivotPos == k)return  arr[pivotPos];
//		if (pivotPos < k)return quickSort(arr, pivotPos + 1, high, k);
//		if (pivotPos > k)return quickSort(arr, low, pivotPos - 1, k);
//
//	}
//	else if (low == high && low == k) {//������ֻ��һ��Ԫ��
//		return arr[k];
//	}
//}
//int main() {
//	int arr[] = { 0,1,5,6,3,4,7,11,10 };//1 3 4 5 6 7 10 11
//	int value;
//	int k;
//	printf("������Ҫ���ҵ����ݣ�k=");
//	scanf("%d", &k);
//	getchar();
//	value = quickSort(arr, 1, 8, k);
//	printf("%d ", value);
//	return 0;
//}