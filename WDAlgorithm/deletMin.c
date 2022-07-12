///*
//	从顺序表中删除具有最小值的元素（假设唯一），并由函数返回被删除的值，
//	空出的位置有最后一个元素代替，若顺序表为空则显示错误信息并退出运行
//*/
///*
//	分析：我们可以将顺序表看做数组，即我们要找出数组中最小的元素位置，
//	并删除它，而这里的删除之后我们会用最后一个元素替代它。综上所诉，我们
//	可以设置一个位置标签，遍历一次找到最小的那个元素的位置，然后直接将最后一个元素的值赋予该位置
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int deleteMin(int *arr,int len) {
//	if (!len) return ;//数组为空，退出运行
//	int minPos=0,min=*arr;
//	for (int i = 1; i < len;i++) {
//		if (min>*(arr+i)) {
//			min = *(arr + i);
//			minPos = i;
//		}
//	}
//	//找到最小值之后，进行交换
//	*(arr + minPos) = *(arr + len - 1);
//	*(arr + len - 1) = NULL;
//	return min;
//}
//int main() {
//	int n;//手动输入数组长度
//	printf("请输入数组长度：");
//	scanf("%d",&n);
//	int *arr = (int *)malloc(sizeof(n));//动态分配数组
//	printf("请输入数组的元素值，输入一个以enter结束");
//	for (int i = 0; i < n;i++) 
//		scanf("%d",arr+i);
//	for (int i = 0; i < n;i++) //原始数组
//		printf("%d",*(arr+i));
//	printf("\n");
//	deleteMin(arr,n);
//	for (int i = 0; i < n-1; i++)//当前数组
//		printf("%d", *(arr + i));
//	return 0;
//}