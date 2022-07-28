///*
//	Ñ°ÕÒÖ÷ÔªËØ
//*/
//#include <stdio.h>
//
//int findMain(int *arr, int len) {
//	int c = *arr, count = 1,mainCount = 0;
//	for (int i = 1; i < len; i++) {
//		if (c == *(arr + i)) {
//			count++;
//		}
//		else {
//			if (count > 0) {
//				count--;
//			}
//			else {
//				c = *(arr + i);
//				count = 1;
//			}
//		}
//	}
//	if (count > 0) {
//		for (int i = 0; i < len; i++) {
//			if (*(arr + i) == c) {
//				mainCount++;
//			}
//		}
//
//	}
//	if (mainCount > len / 2)
//		return c;
//	else
//		return -1;
//
//}
//int main() {
//	int arr[] = { 1,5,5,5,5,5,5,5 };
//	int mainNum;
//	mainNum = findMain(arr, 8);
//	printf("%d", mainNum);
//	return 0;
//}