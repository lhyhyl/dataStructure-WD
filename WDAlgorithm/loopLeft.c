/*
	将arr中的存放的数据循环左移p个位置，即将arr中的(X0,X1,...,Xn-1变换为(Xp，Xp-1,...,Xn-1,X0,X1,...,Xp-1))，尽可能高效

	分析：
		本题与逆置数组哪一题相似，我们仍然可以采取逆置数组的方式来完成题目要求，首先整体逆置，然后逆置p到n-1的数据，0到p-1的数据即可完成循环左移

*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
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
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//	int p;
//	printf("请输入左移位数p=");
//	scanf("%d",&p);
//	reverse(arr,0,8);//整体逆置
//	reverse(arr,p,8);//后半段逆置
//	reverse(arr,0,p-1);//前半段逆置
//	for (int i = 0; i < 9;i++)printf("%d ", arr[i]);
//	return 0;
//}