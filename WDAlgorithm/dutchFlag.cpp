///*
//	荷兰国旗问题:
//			这里要求时间复杂度为O（n），显然这是排序所无法完成的，所以我们需要另辟蹊径。
//			我们知道，快速排序的一次划分，可以以枢纽为界，左边均小于枢纽值，右边均大于枢纽值，
//			而这里恰好是三种颜色，我们用0代表红色，1代表白色，2代表蓝色，那么如果我们以1位枢纽，
//			进行一次快速排序的过程后，则可以达到要求，其因为我们仅仅遍历了一次数组，时间复杂度
//			为O（n）
//*/
//#include <stdio.h>
//#include <stdlib.h>
//void swap(int &a, int &b) {
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void dutchFlag(int *arr, int len) {
//	int cur = 0, left = 0, right = len-1;
//	while (cur <= right) {
//		if (arr[cur] < 1)
//			swap(arr[cur++], arr[left++]);
//
//		else if (arr[cur] == 1)
//			cur++;
//
//		else
//			swap(arr[cur], arr[right--]);
//
//
//	}
//}
//int main() {
//	int arr[] = { 0,2,1,2,1,2,1 };
//	dutchFlag(arr, 7);
//	return 0;
//}