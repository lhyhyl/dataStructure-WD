///*
//	KMP�㷨���ַ���ģʽƥ���㷨��
//	�ؼ��������next���飬ͨ��next������ȷ���Ӵ�����һ����ʼλ��
//*/
//
//
//
////��ģʽ��T��next����
//#include <stdio.h>
//#include <stdlib.h>
//void getNext(char *subStr,int *next,int len) {
//	int i = 1,j = 0;
//	next[1] = 0;
//	while (i<len) {
//		if (j==0||subStr[i]==subStr[j]) {
//			next[++i] = ++j;
//		}
//		else {
//			j = next[j];
//		}
//	}
//}
//
//int indexKMP(char *mainStr,char *subStr,int Mlen,int Slen) {
//	int i = 1, j = 1;
//	int* next = (int*)malloc(sizeof(Slen + 1));//��̬����next����
//	getNext(subStr,next,Slen);
//	while (i<=Slen&&j<=Mlen) {
//		if (j==0||subStr[i]==mainStr[j]) {
//			++i;
//			++j;
//		}
//		else {
//			j = next[j];
//		}
//	}
//	if (j > Slen) return i - Slen;
//	else return 0;
//
//}
//
