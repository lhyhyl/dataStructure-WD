///*
//	��дһ���㷨��ʹ֮�ܹ����������ҵ���kС��Ԫ��
//	���������ǿ��Բ���������ķ�ʽ��������ʱ�临�Ӷ�ƫ�ߣ��������ǲ��ÿ�������������˼��������֪����������ÿһ�˻�ȷ��һ��Ԫ�ص�����
//	λ�ã�����Ϊm��
//				��m=k����ô��ʱ���ҵ��˵�kС��Ԫ��
//				��m<k,˵����kС��Ԫ�ػ���m���Ұ벿�֣��������ҵ� k-mСԪ��
//				��m>k��˵����kС��Ԫ����m����벿�֣��������ҵ�kСԪ��
//				���㷨��ƽ��ʱ�临�Ӷ�ΪO��n��
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
//int quickSort(int *arr, int low, int high, int k) {
//	if (low < high) {
//		int pivotPos = partition(arr, low, high);
//		if (pivotPos == k)return  arr[pivotPos];
//		if (pivotPos < k)return quickSort(arr, pivotPos + 1, high, k - pivotPos + 1);
//		if (pivotPos > k)return quickSort(arr, low, pivotPos - 1, k);
//
//	}
//}
//int main() {
//	int arr[] = { 1,5,6,3,4,7,11,10 };
//	int value;
//	value = quickSort(arr, 0, 7, 5);
//	printf("%d ", value);
//	return 0;
//}