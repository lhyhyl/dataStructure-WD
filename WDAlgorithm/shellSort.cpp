/*
	ϣ������
			ֱ�Ӳ�������ĸĽ��汾����ʼʱ����һ������������ͨ��Ϊ���鳤�ȵ�һ�룬������������ֱ�Ӳ�������ÿ�ֲ���������/2��
			ֱ������Ϊһ����ʱ�൱�ڽ���һ��ԭʼֱ�Ӳ�������
*/
#include <stdio.h>
#include <stdlib.h>

void shellSort(int *arr, int len) {
	int d = len / 2;
	for (int i = 0; i < d; i + d) {
		for (int j = 0; j < i;j+d) {
			int nowN = arr[i];
			if (arr[i]<arr[j]) {
				for (int k = i - d; k > j - d;k--) {
					arr[k + d] = arr[k];
				}
				arr[j] = nowN;
			}
		}
		d = d / 2;
	}

}
int main() {
	int arr[] = { 5,3,4,10,8,9,7,12 ,10,15 };

	shellSort(arr, 10);
	return 0;
}