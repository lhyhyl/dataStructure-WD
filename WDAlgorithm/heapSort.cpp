///*
//	���������ǿ��Խ��ѷ�Ϊ�������С�����������Ǹ��ڵ���������Һ��ӽ�㣨����ѣ�������ڵ��С�����Һ��ӽ��
//			�������Ǳ����ÿ��������ڵ㣬�ٰ����һ��Ԫ�طŵ��Ѷ����������¹���һ����
//*/
//#include <stdio.h>
//void swap(int &a, int &b) {//��������
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void heapAdjust(int *arr,int k, int len) {//�ѵĵ���,���������kΪ���ڵ����������Ϊ�����
//	arr[0] = arr[k];//�ݴ�arr[k]
//	for (int i = 2 * k; i <= len;i*=2) {
//		if (i < len&&arr[i] < arr[i + 1])//����Һ��Ӹ���iָ���Һ���
//			i++;
//		if (arr[0] >= arr[i]) break;
//		else {
//			arr[k] = arr[i];
//			k = i;//�������µ���
//		}
//	}
//	arr[k] = arr[0];
//}
//void buildMaxHeap(int *arr,int len) {//��ʼ����
//	for (int i = len / 2; i > 0;i--) {
//		heapAdjust(arr,i,len);
//	}
//}
//void heapSort(int *arr, int len) {
//	buildMaxHeap(arr,len);//����
//	for (int i = len; i >= 1;i--) {
//		printf("%d ",arr[1]);
//		swap(arr[i],arr[1]);//�ѵ�Ū��ȥ
//		heapAdjust(arr,1,i-1);//��ʣ���Ԫ���ųɶ�
//	}
//}
//int main() {
//	int arr[] = { 0,9,3,4,10 };
//	heapSort(arr,4);
//	return 0;
//}