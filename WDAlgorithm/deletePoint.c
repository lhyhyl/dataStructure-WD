/*
	从顺序表中删除给定区间s~t之间的值，若给定区间不合理或顺序表为空，则显示错误信息并退出
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void deletePoint(int *arr, int s, int t, int len) {
//	int k = 0, i = 0;
//	for (i = 0; i < len && *(arr + i) < s; i++);//找到第一个大于等于s的元素
//	if (i >= len) return;
//	for (k = i; k <= len && *(arr + k) <= t; k++);//找到第一个大于t的元素
//	for (; k < len; i++, k++) *(arr + i) = *(arr + k);
//	printf("当前数组为：");
//	for (int j = 0; j < i; j++) printf("%d ", *(arr + j));
//}
//int main() {
//	int arr[] = { 1,2,4,6,10,15 };//也可以由用户输入
//	int s, t;//用于给定区间范围
//	int len = sizeof(arr) / sizeof(int);
//	printf("请输入区间范围,s<t\n");
//	do {
//		printf("s=");
//		scanf("%d", &s);
//		printf("t=");
//		scanf("%d", &t);
//	} while (s > t);
//	deletePoint(arr, s, t, len);
//	return 0;
//}