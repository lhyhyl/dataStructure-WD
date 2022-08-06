/*
	有两个循环单链表，链表头指针分别为h1和h2，编写一个函数将链表h2连接到h1之后，要求连接后的链表仍保持循环链表形式。
	分析：
		首先我们要找到h1的尾结点，找到尾结点后将尾结点的next指向h2的首节点，然后找到h2的尾结点，将其next指针指向h1，
		就大功告成了。
*/
//struct Link {
//	int data;
//	Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void linkTwoLists(Link *h1,Link *h2) {
//	Link *p1 = h1->next, *p2 = h2->next;
//	while (p1->next != h1) p1 = p1->next;//这里要去判断p1->next是否等于h1，进而判断出是否到达尾结点
//	p1->next = p2;
//	while (p2->next != h2) p2 = p2->next;
//	p2->next = h1;
//	free(h2);//释放h2
//}
//int main() {
//	Link *h1, *h2,*p;
//	Link *createSinLoopLink();
//	h1 = createSinLoopLink();
//	h2 = createSinLoopLink();
//	linkTwoLists(h1,h2);
//	p = h1->next;
//	while (p!=h1) {
//		printf("%d ",p->data);
//		p = p->next;
//	}
//	return 0;
//}