///*
//	˫��ð������
//				��ν˫�򣬼���������ͬʱ�������������������һ���̶��Ͻ���ʱ�俪����
//				�������Ҵ�ֵ���³�����������Сֵ����ð��ֻ��Ҫ�ı�������ΪԪ�ظ�����һ��
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void BibubbleSort(int *arr, int len) {
//	int low = 0, high = len - 1;
//	int flag = 1;
//	while (low < high && flag) {//ѭ������
//		flag = 0;//��־�����Ƿ��в���
//		for (int j = low; j < high; j++) {//���³�
//			if (arr[j] > arr[j + 1]) {//�����򽻻�
//				swap(arr[j], arr[j + 1]);
//				flag = 1;
//			}
//			
//		}
//		high--;
//		for (int j = high; j > low; j--) {//����ð
//			if (arr[j] < arr[j - 1]) {//�����򽻻�
//				swap(arr[j], arr[j - 1]);
//				flag = 1;
//			}
//			
//		}
//		low++;
//	}
//
//}
//int main() {
//	int arr[] = { 9,3,4,10,8,5,7,12,10,15 };
//	BibubbleSort(arr, 10);
//	return 0;
//}