/*
	��arr�еĴ�ŵ�����ѭ������p��λ�ã�����arr�е�(X0,X1,...,Xn-1�任Ϊ(Xp��Xp-1,...,Xn-1,X0,X1,...,Xp-1))�������ܸ�Ч

	������
		����������������һ�����ƣ�������Ȼ���Բ�ȡ��������ķ�ʽ�������ĿҪ�������������ã�Ȼ������p��n-1�����ݣ�0��p-1�����ݼ������ѭ������

*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void reverse(int *arr,int from,int to) {//���ú��������������飬��㣬�յ�
//	if (from > to) {
//		return;
//	}
//	int tmp;
//	for (int i = from; i <= (from+to)/2;i++) {//iҪС�ڵ��ڸ�ֵ�Ķ���֮һ����Ȼ�м��ֵû�н���
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + to - i +from);
//		*(arr + to - i +from) = tmp;
//	}
//
//}
//int main() {
//	int arr[9] = {1,2,3,4,5,6,7,8,9};
//	int p;
//	printf("����������λ��p=");
//	scanf("%d",&p);
//	reverse(arr,0,8);//��������
//	reverse(arr,p,8);//��������
//	reverse(arr,0,p-1);//ǰ�������
//	for (int i = 0; i < 9;i++)printf("%d ", arr[i]);
//	return 0;
//}