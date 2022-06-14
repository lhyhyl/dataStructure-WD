///*
//	实现一个空间复杂度为O(1)的顺序表逆置算法。
//	分析：从第一个元素开始遍历到中间元素，使用中间变量对a[i]与a[n-i+1]进行调换，即可完成
//*/
//#include <stdio.h>
//void revert(int *arr,int len) {
//	int tmp;
//	for (int i = 0; i < len/2;i++) {
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + len - i - 1);
//		*(arr + len - i - 1) = tmp;
//	}
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7};//这里的数组也可以手动赋值
//	int len = sizeof(arr)/4;
//	revert(arr,len); 
//	for (int i = 0; i < len;i++) printf("%d ",*(arr+i));
//	return 0;
//}