///*
//	ʵ��һ���ռ临�Ӷ�ΪO(1)��˳��������㷨��
//	�������ӵ�һ��Ԫ�ؿ�ʼ�������м�Ԫ�أ�ʹ���м������a[i]��a[n-i+1]���е������������
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
//	int arr[] = {1,2,3,4,5,6,7};//���������Ҳ�����ֶ���ֵ
//	int len = sizeof(arr)/4;
//	revert(arr,len); 
//	for (int i = 0; i < len;i++) printf("%d ",*(arr+i));
//	return 0;
//}