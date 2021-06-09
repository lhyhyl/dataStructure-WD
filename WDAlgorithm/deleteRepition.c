/*
	删除有序顺序表中重复的值，使表中所有的元素不同。
	分析：
		因为是有序顺序表，我们可以直接进行遍历，将不同的元素存回数组
		
*/
//#include <stdio.h>
//int deleteRepitition(int *arr,int len) {//由于C语言无法直接修改数组长度，我们返回去重后的数组长度
//	int k = 0;//用来记录下标
//	for (int i = 0; i < len;i++) {
//		if (*(arr+i)-*(arr+i+1)) {
//			*(arr + k++) = *(arr + i);
//		}
//	}
//	if (*(arr+len-1) == *(arr+len)) {//如果最后一个元素恰好和后一个存储空间元素等，则需要单独处理。
//		*(arr + k++) = *(arr+len-1);
//	}
//	return k;
//}
//int main() {
//	int arr[] = {1,1,2,2,2,3,3,4,5};
//	int len = sizeof(arr) / sizeof(int);
//	len=deleteRepitition(arr,len);
//	for (int i = 0; i < len; i++) printf("%d ",*(arr+i));
//	return 0;
//}