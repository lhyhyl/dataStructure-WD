/*
	已知在以为数组A[m+n]中依次存放两个线性表(a1,a2...,am)和(b1,b2,...,bn),现需要将两个线性表互换位置，b在前，a在后
	分析：
		要想达到这样的效果，我们可以进行三次逆置。
		第一次对整个数组A进行逆置，然后对前面的b进行逆置，最后对后面的a进行逆置，这样便达到了效果

*/
//#include <stdio.h>
//
//void reverse(int *arr,int from,int to) {//逆置函数，参数：数组，起点，终点
//	if (from > to) {
//		return;
//	}
//	int tmp;
//	for (int i = from; i <= (from+to)/2;i++) {//i要小于等于该值的二分之一，不然中间的值没有交换
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + to - i +from);
//		*(arr + to - i +from) = tmp;
//	}
//
//}
//int main() {
//	int arr[11] = {1,2,3,4,5,11,22,33,44,55,66};//也可以由用户输入数组值
//	reverse(arr,0,10);
//	reverse(arr, 0, 5);//因为下标从0开始，所以相应的比个数小一
//	reverse(arr, 6, 10);
//	for (int i = 0; i < 11; i++) printf("%d ",arr[i]);
//	return 0;
//
//}