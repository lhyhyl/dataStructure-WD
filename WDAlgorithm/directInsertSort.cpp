///*
//	ֱ�Ӳ�������
//				�ӵ�һ������ʼ�����뵽��ǰ��Ӧ���ڵ�λ��
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void directInsertSort(int *arr,int len) {
//	for (int i = 0; i < len;i++) {//����len��ѭ�� 
//		for (int j = 0; j < i;j++) {
//			if (arr[i] < arr[j]) {//��ʱ�ҵ������Ĺ���
//				int nowN = arr[i];//���������ֵ�ݴ�
//				for (int k = i-1; k >= j;k--) {//���±�Ϊj��Ԫ�ؿ�ʼ�����ƣ���λ��
//					arr[k+1] = arr[k];
//				}
//				arr[j] = nowN;
//			}
//		}
//	}
//}
//int main() {
//	int arr[] = {5,3,4,10,8,9,7,12};
//	directInsertSort(arr,8);
//	for (int i = 0; i < 8;i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}