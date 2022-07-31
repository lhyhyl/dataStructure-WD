/*
	就地逆置链表
	分析：
		我们采用头插法进行逆置。
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
//	////pre记录操作节点p上一个节点，q记录第一个节点，之后需要指向NULL,r用于指向每一次操作时p的后一个节点，防止断链
//	//while (p) {//遍历操作，修改指针指向
//	//	r = p->next;
//	//	p->next = pre;
//	//	pre = p;
//	//	p = r;
//	//}
//	//h->next = pre;//头指针指向最后一个节点
//	//q->next = NULL;//第一个节点指向NULL，不然就是循环单链表了
//	
//
//	//我们也可以采用头插法进行逆置,两个方法的时间复杂度均为O(N)
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
//	printf("逆置后链表值为：");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}