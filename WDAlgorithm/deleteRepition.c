///*
//	ɾ������˳������ظ���ֵ��ʹ�������е�Ԫ�ز�ͬ��
//	������
//		��Ϊ������˳������ǿ���ֱ�ӽ��б���������ͬ��Ԫ�ش������
//		
//*/
//#include <stdio.h>
//int deleteRepitition(int *arr,int len) {//����C�����޷�ֱ���޸����鳤�ȣ����Ƿ���ȥ�غ�����鳤��
//	int k = 0;//������¼�±�
//	for (int i = 0; i < len;i++) {
//		if (*(arr+i)!=*(arr+i+1)) {
//			*(arr + k++) = *(arr + i);
//		}
//	}
//	if (*(arr+len-1) == *(arr+len)) {//������һ��Ԫ��ǡ�úͺ�һ���洢�ռ�Ԫ�صȣ�����Ҫ��������
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