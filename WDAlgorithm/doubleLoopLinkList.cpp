/*
	���һ���㷨�жϴ�ͷ����ѭ��˫�����Ƿ�Գ�
	������
		�򵥷��������ǿ�����������ָ�룬pre��next����ͷ�����������бȽϣ���pre��next��ֵָ��ͬ���򲻶Գƣ���pre��nextָ����ͬһ���ڵ�
		���ѭ��˫����Գ�
*/
struct Link {
	int data;
	struct Link *next;
	struct Link *pre;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
//void isSymmetry(Link *h) {
//	struct Link *pre = h->pre,*next=h->next;
//	while (pre!=next&&pre->pre!=next) {//��ʱ��������������������ڵ��ż�����ڵ㶼Ҫ����
//		if (pre->data!=next->data) {
//			printf("��ѭ��˫�����Գ�");
//			break;
//		}
//		else {
//			pre = pre->pre;
//			next = next->next;
//		}
//	}
//	if (pre==next||pre->pre==next) {
//		printf("��ѭ��˫����Գ�");
//	}
//}
//int main() {
//	struct Link *head;
//	Link *createDouLoopLink();
//	head = createDouLoopLink();
//	isSymmetry(head);
//	return 0;
//}