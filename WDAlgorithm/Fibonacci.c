///*
//	���õݹ鷽ʽ��ǵݹ鷽ʽ���쳲��������У���������ʱ�临�Ӷ�
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////int fibonacci(n) {//�ݹ�汾,ʮ�ֺ��ܣ�ʱ�临�Ӷ�O(2^n)
////	if (n <= 1) return n;
////	else {
////		return fibonacci(n-1) + fibonacci(n-2);
////	}
////}
////int fibonacci(n) {//�ǵݹ�汾,���ö�̬�滮�����¶��ϣ�ʱ�临�Ӷ�O(n)
////	int *arr = (int *)malloc(sizeof(n));
////	arr[0] = 1;
////	arr[1] = 1;
////	for (int i = 2; i < n;i++) {
////		arr[i] = arr[i-1] + arr[i-2];
////	}
////	return arr[n - 1];
////}
//int fibonacci(n) {//�ǵݹ�汾,����ȡ������ʽ�������м��������ʽ��ʱ�临�Ӷ�O(n)
//
//	if (n<=1) {
//		return n;
//	}
//	int preNum = 0, currentNum = 1,sum=0;
//	for (int i = 2; i < n;i++) {
//		sum =  preNum + currentNum;
//		preNum = currentNum;
//		currentNum = sum;
//	}
//	return sum;
//}
//int main() {
//	int n,res;
//	printf("���������n��");
//	scanf("%d",&n);
//	res = fibonacci(n);
//	printf("����ǣ�%d",res);
//	return 0;
//}