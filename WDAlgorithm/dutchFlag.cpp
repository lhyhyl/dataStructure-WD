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
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void dutchFlag(int *arr, int len) {
//	int cur = 0, left = 0, right = len-1;
//	while (cur <= right) {
//		if (arr[cur] < 1)
//			swap(arr[cur++], arr[left++]);
//
//		else if (arr[cur] == 1)
//			cur++;
//
//		else
//			swap(arr[cur], arr[right--]);
//
//
//	}
//}
//int main() {
//	int arr[] = { 0,2,1,2,1,2,1 };
//	dutchFlag(arr, 7);
//	return 0;
//}