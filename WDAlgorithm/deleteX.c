///*
//	����Ϊn��ɾ��ֵΪx������Ԫ�أ�Ҫ��ʱ�临�Ӷ�ΪO(n),�ռ临�Ӷ�O(1)��
//	������
//		��k��¼ɾ��Ԫ�ظ�������һ�߱���˳���һ��ͳ��k������������x��Ԫ����ǰŲk��λ��
//*/
//#include <stdio.h>
//void deleteX(int *arr,int n,int len) {
//	int k = 0,i=0;//���м���
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
//	int arr[] = {1,2,3,2,4,2};//Ҳ�����ֶ���ֵ��
//	int len = sizeof(arr) / sizeof(int);
//	deleteX(arr,2,len);//Ҫɾ����Ԫ��Ҳ�������û�����
//	return 0;
//}