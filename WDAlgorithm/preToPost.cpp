///*
//	����һ���������������нڵ�ֵ����ͬ������֪����������Ϊpre�����һ���㷨�����������post
//	������
//		��Ŀ�Ѿ�����������һ�����������������ǾͿ��Դ����������Ƴ��������У���Ϊ�����������Ƕ԰�ֵģ����������
//		1���ҳ��������еĸ��ڵ㣬������������������ĩβ��
//		2�������ڵ�֮��Ľڵ�ֳ��������ѣ��ڷֱ�ִ����һ��
//		3��ֱ��ȫ��������
//*/
//
//#include <stdio.h>
//
//void preToPost(char *arrPre,char *arrPost,int l1,int h1,int l2,int h2) {
//	//l1,h1,l2,h2����arrPre��arrPost������ĩβ
//	int half;
//	if (l1 <= h1) {
//		half = (h1 - l1) / 2;
//		*(arrPost + h2) = *(arrPre + l1);
//		preToPost(arrPre, arrPost, l1 + 1, l1 + half, l2, l2 + half - 1);//���
//		preToPost(arrPre, arrPost, l1 + half + 1, h1, l2+ half, h2-1);//�ұ�
//	}
//
//}
//int main() {
//	char arrPre[] = {'A','B','D','M','C','F','G'},arrPost[7];
//	preToPost(arrPre,arrPost,0,6,0,6);
//	for (int i = 0; i < 7;i++) {
//		printf("%c ",*(arrPost+i));
//	}
//	return 0;
//}
