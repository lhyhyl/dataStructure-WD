///*
//	���Ա���������ţ����һ�㷨�������ٵ�ʱ�����ֵΪx��Ԫ�أ�
//	���ҵ����������Ԫ��λ���ཻ�������򣬲���ʹ����Ȼ����
//
//	������
//		��Ŀ��֪����һ�����������Ҫʹʱ�����٣����ǿ��Բ�ȡ�۰���ҵķ�ʽ��������˳�����ʡʱ
//
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int findAndExchange(int* arr, int n, int len) {//�������鳤��
//	int low = 0, high = len, middle;
//	while (low <= high && (middle = (low + high) / 2)) {
//		if (n == arr[middle])break;
//		if (n < arr[middle]) {
//			high = middle - 1;
//		}
//		else {
//			low = middle + 1;
//		}
//	}
//	if (low > high) {//δ�ҵ�������
//		int i;
//		for (i = len - 1; i > high; i--) {//Ԫ������λ�ü���֮���Ԫ�غ���
//			*(arr + i + 1) = *(arr + i);
//		}
//		*(arr + i + 1) = n;
//		return len + 1;
//	}
//	else {//�ҵ����Ե�
//		int tmp = *(arr + middle);
//		*(arr + middle) = *(arr + middle + 1);
//		*(arr + middle + 1) = tmp;
//		return len;
//	}
//}
//int main() {
//	int arr[10] = { 1,3,5,6,9,12,45,78 };
//	int n, len;
//	printf("��������Ҫ���ҵ�Ԫ�أ�n=");
//	scanf("%d", &n);
//	len = findAndExchange(arr, n, 8);
//	for (int i = 0; i < len; i++) printf("%d ", *(arr + i));
//	return 0;
//}