/*
	�͵���������
	������
		���ǲ���ͷ�巨�������á�
*/
//struct Link {
//	int data;
//	struct Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
////void reverse(Link *h) {
//	//struct Link *pre = h, *p = h->next, *q = h->next,*r;
//	////pre��¼�����ڵ�p��һ���ڵ㣬q��¼��һ���ڵ㣬֮����Ҫָ��NULL,r����ָ��ÿһ�β���ʱp�ĺ�һ���ڵ㣬��ֹ����
//	//while (p) {//�����������޸�ָ��ָ��
//	//	r = p->next;
//	//	p->next = pre;
//	//	pre = p;
//	//	p = r;
//	//}
//	//h->next = pre;//ͷָ��ָ�����һ���ڵ�
//	//q->next = NULL;//��һ���ڵ�ָ��NULL����Ȼ����ѭ����������
//	
//
//	//����Ҳ���Բ���ͷ�巨��������,����������ʱ�临�ӶȾ�ΪO(N)
//	struct Link *l = h, *p = h->next,*r;
//	l->next = NULL;
//	while (p) {
//		r = p->next;
//		p->next = l->next;
//		l->next = p;
//		p = r;
//	}
//	h = l;
//}
//int main() {
//	Link *head = (Link*) malloc(sizeof(Link));
//	Link *createLink(int);
//	head = createLink(0);
//	reverse(head);
//	printf("���ú�����ֵΪ��");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}