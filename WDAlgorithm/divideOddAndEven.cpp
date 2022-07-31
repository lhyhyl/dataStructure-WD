/*
	将一个带头结点单链表A分解成两个带头结点的单链表A和B，使得A中含有原表中序号为奇数的元素，B中为偶数，且保持其相对位置不变
	分析：
		首先我们需要分配一个节点空间为B作为头节点，然后设置一个flag，为0时认为是奇数，链给A，为1时认为是
		偶数，连给B
*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void divide(Link *lb,Link *la) {
//	int flag = 0;//做奇偶判定，因为奇数之后一定是偶数，偶数之后一定是奇数
//	struct Link *l=la, *p = la->next,*rb=lb,*ra=l;
//	l->next = NULL;//原链表头结点置空
//	while (p) {//要使其顺序不变，采用尾插法
//		if (!flag) {
//			ra->next = p;
//			ra = p;
//			flag = 1;
//		}
//		else {
//			rb->next = p;
//			rb = p;
//			flag = 0;
//		}
//		p = p->next;
//	}
//	ra->next = NULL;//要记得将末尾节点的指针指向NULL，不然就仍然是之前的指针，导致结果不正确
//	rb->next = NULL;
//}
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	Link *b = (Link*)malloc(sizeof(Link));//开辟节点空间
//	divide(b,head);
//	printfNowLink(b);
//	printf("\n");
//	printfNowLink(head);
//	return 0;
//}