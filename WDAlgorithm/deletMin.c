///*
//	��˳�����ɾ��������Сֵ��Ԫ�أ�����Ψһ�������ɺ������ر�ɾ����ֵ��
//	�ճ���λ�������һ��Ԫ�ش��棬��˳���Ϊ������ʾ������Ϣ���˳�����
//*/
///*
//	���������ǿ��Խ�˳��������飬������Ҫ�ҳ���������С��Ԫ��λ�ã�
//	��ɾ�������������ɾ��֮�����ǻ������һ��Ԫ����������������ߣ�����
//	��������һ��λ�ñ�ǩ������һ���ҵ���С���Ǹ�Ԫ�ص�λ�ã�Ȼ��ֱ�ӽ����һ��Ԫ�ص�ֵ�����λ��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int deleteMin(int *arr,int len) {
//	if (!len) return ;//����Ϊ�գ��˳�����
//	int minPos=0,min=*arr;
//	for (int i = 1; i < len;i++) {
//		if (min>*(arr+i)) {
//			min = *(arr + i);
//			minPos = i;
//		}
//	}
//	//�ҵ���Сֵ֮�󣬽��н���
//	*(arr + minPos) = *(arr + len - 1);
//	*(arr + len - 1) = NULL;
//	return min;
//}
//int main() {
//	int n;//�ֶ��������鳤��
//	printf("���������鳤�ȣ�");
//	scanf("%d",&n);
//	int *arr = (int *)malloc(sizeof(n));//��̬��������
//	printf("�����������Ԫ��ֵ������һ����enter����");
//	for (int i = 0; i < n;i++) 
//		scanf("%d",arr+i);
//	for (int i = 0; i < n;i++) //ԭʼ����
//		printf("%d",*(arr+i));
//	printf("\n");
//	deleteMin(arr,n);
//	for (int i = 0; i < n-1; i++)//��ǰ����
//		printf("%d", *(arr + i));
//	return 0;
//}