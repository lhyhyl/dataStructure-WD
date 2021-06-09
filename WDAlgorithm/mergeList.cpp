/*
	假设有两个按元素值递增次序排列的线性表，均以单链表形式存储。请编写算法将这两个单链表归并为一个按元素递减的单链表，
	并要求利用原来两个单链表的节点存放归并后的单链表。
	分析：
		因为链表递增，所以我们可以采用头插法进行处理，以a链为起始链，进行归并
*/
struct Link {
	int data;
	struct Link *next;
};
#include <stdio.h>

void merge(Link *ha,Link *hb) {
	struct Link *l = ha, *pa = ha->next, *pb = hb->next, *ra, *rb;
	l->next = NULL;
	while (pa&&pb) {
		if (pa->data<pb->data) {
			ra = pa->next;
			pa->next = l->next;
			l->next = pa;
			pa = ra;
		}
		else {
			rb = pb->next;
			pb->next = l->next;
			l->next = pb;
			pb = rb;
		}
	}
	while (pa) {
		ra = pa->next;
		pa->next = l->next;
		l->next = pa;
		pa = ra;
	}
	while (pb) {
		rb = pb->next;
		pb->next = l->next;
		l->next = pb;
		pb = rb;
	}
}
//int main() {
//	struct Link *ha,*hb;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	ha = createLink(0);
//	hb = createLink(0);
//	merge(ha,hb);
//	printfNowLink(ha);
//	return 0;
//}