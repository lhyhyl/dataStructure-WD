///*
//	��˳�����ɾ����������s~t֮���ֵ�����������䲻�����˳���Ϊ�գ�����ʾ������Ϣ���˳�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void deletePoint(int *arr, int s, int t, int len) {
//	int k = 0, i = 0;
//	for (i = 0; i < len && *(arr + i) < s; i++);//�ҵ���һ�����ڵ���s��Ԫ��
//	if (i >= len) return;
//	for (k = i; k <= len && *(arr + k) <= t; k++);//�ҵ���һ������t��Ԫ��
//	for (; k < len; i++, k++) *(arr + i) = *(arr + k);
//	printf("��ǰ����Ϊ��");
//	for (int j = 0; j < i; j++) printf("%d ", *(arr + j));
//}
//int main() {
//	int arr[] = { 1,2,4,6,10,15 };//Ҳ�������û�����
//	int s, t;//���ڸ������䷶Χ
//	int len = sizeof(arr) / sizeof(int);
//	printf("���������䷶Χ,s<t\n");
//	do {
//		printf("s=");
//		scanf("%d", &s);
//		printf("t=");
//		scanf("%d", &t);
//	} while (s > t);
//	deletePoint(arr, s, t, len);
//	return 0;
//}