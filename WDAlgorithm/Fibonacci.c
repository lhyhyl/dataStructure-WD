///*
//	采用递归方式与非递归方式求解斐波那契数列，并分析其时间复杂度
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////int fibonacci(n) {//递归版本,十分耗能，时间复杂度O(2^n)
////	if (n <= 1) return n;
////	else {
////		return fibonacci(n-1) + fibonacci(n-2);
////	}
////}
////int fibonacci(n) {//非递归版本,采用动态规划，自下而上，时间复杂度O(n)
////	int *arr = (int *)malloc(sizeof(n));
////	arr[0] = 1;
////	arr[1] = 1;
////	for (int i = 2; i < n;i++) {
////		arr[i] = arr[i-1] + arr[i-2];
////	}
////	return arr[n - 1];
////}
//int fibonacci(n) {//非递归版本,不采取数组形式，采用中间变量的形式，时间复杂度O(n)
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
//	printf("请输入基数n：");
//	scanf("%d",&n);
//	res = fibonacci(n);
//	printf("结果是：%d",res);
//	return 0;
//}