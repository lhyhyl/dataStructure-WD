///*
//	长度为n，删除值为x的数据元素，要求时间复杂度为O(n),空间复杂度O(1)。
//	分析：
//		用k记录删除元素个个数，一边遍历顺序表一边统计k，并将不等于x的元素向前挪k个位置
//*/
//#include <stdio.h>
//void deleteX(int *arr,int n,int len) {
//	int k = 0,i=0;//进行计数
//	while (i<len) {
//		if (*(arr+i)==n) {
//			k++;
//		}
//		else {
//			*(arr +i- k) = *(arr + i);
//		}
//		i++;
//	}
//	for (int i = 0; i < len-k; i++) {
//		printf("%d ", *(arr + i));
//	}
//}
//int main() {
//	int arr[] = {1,2,3,2,4,2};//也可以手动赋值的
//	int len = sizeof(arr) / sizeof(int);
//	deleteX(arr,2,len);//要删除的元素也可以有用户输入
//	return 0;
//}