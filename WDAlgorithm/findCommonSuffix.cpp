/*
	��������һ����������������������ͬ�ĺ�׺�������ǿ��Խ���׺��Ϊ�������ִ洢������being��loading������ing�Ϳ�����Ϊ
	�������֣����ڴ��������������й������֣����һ����Ч�㷨�ҵ��乫����׺��ʵλ�á�
	������
		���ǿ��������룬������ǵ����������������ָ��ͬ���ƶ�����ôֻ��������������ͬʱ�ſ����ڹ������ֵ���ʼλ��������
		��������Ӧ�������Ǵ���ͬһ�������ϣ��ʶ�����Ӧ���ýϳ����������ߣ������߶��٣�Ӧ�����߹���������ĳ���֮�

*/
struct Link {
	union 
	{
		int data;
		char letter;

	};
	Link *next;
};
#include <stdio.h>
#include <stdlib.h>
Link *findCommonSuffix(Link *h1,Link *h2) {
	struct Link *p = h1->next, *q = h2->next;
	int countP =0, countQ = 0,gap;
	while (p) {//��������ȡ������
		countP++;
		p = p->next;
	}
	while (q) {
		countQ++;
		q = q->next;
	}
	if (countQ>countP) {//��pָ��ʼ��ָ��ϳ�����������
		p = h2->next;
		q = h1->next;
		gap = countQ - countP;
	}
	else {
		p = h1->next;
		q = h2->next;
		gap = countP - countQ;
	}
	while (gap--) p = p->next;//������ָ�������ƶ�gapλ
	while (q != p && q != NULL) {//����ָ�벻ͬ��ΪNULLʱ��������ƶ�
		q = q->next;
		p = p->next;
	}
	return p;
	
}
//int main() {
//	struct Link *h1,*h2,*com,*p1,*p2,*start;
//	Link *createLink(int);
//	char p[] = "letter";//�������ͣ�char
//	h1 = createLink(1);
//	h2 = createLink(1);
//	com = createLink(1);//��������
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1->next)p1 = p1->next;//������β
//	while (p2->next)p2 = p2->next;
//	p1->next = com->next;//���ӹ�������
//	p2->next = com->next;
//	p1 = h1->next;
//	p2 = h2->next;
//	while (p1) {
//		printf("%c",p1->letter);
//		p1 = p1->next;
//
//	}
//	printf("\n");
//	while (p2) {
//		printf("%c",p2->letter);
//		p2 = p2->next;
//
//	}
//	printf("\n");
//	start=findCommonSuffix(h1,h2);
//	printf("%c",start->letter);
//	return  0;
//}