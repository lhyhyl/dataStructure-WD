/*
	����������˳���ϲ���һ���µ�˳������ɺ��������µĽ��˳���
	������
		�ֶ�����һ������ռ䣬���СҪ���ڵ���ԭʼ��������ĳ��ȣ�֮����б���������ȡ��Сֵ����������
*/
//#include <stdio.h>
//int *merge(int* l1,int* l2,int len1,int len2) {
//	
//	int* new = (int*)malloc(len1+len2);
//	int k = 0,i = 0,j = 0;
//	for (; i < len1&&j < len2;) {
//		if (*(l1+i)<*(l2+j)) {
//			*(new + k++) = *(l1 + i++);
//		}
//		else {
//			*(new + k++) = *(l2 + j++);
//		}
//	}
//	while (i < len1) {
//		*(new + k++) = *(l1 + i++);
//	}
//	while (j < len2) {
//		*(new + k++) = *(l2 + j++);
//	}
//	return new;
//}
//int main() {
//	int l1[] = {1,3,5,8};
//	int l2[] = {2,4,4,6,7};
//	int len1 = sizeof(l1) / sizeof(int);
//	int len2 = sizeof(l2) / sizeof(int);
//	int *res;
//	res = merge(l1,l2,len1,len2);
//	for (int i = 0; i < len1 + len2; i++) printf("%d ",*(res+i));
//	return 0;
//}