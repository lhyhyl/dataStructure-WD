/*
		设A、B是两个单链表（带头结点），其中元素递增有序，设计一个算法从A、B中的公共元素产生单链表C，要求不破坏A、B节点
		分析：
			要求不破坏A、B节点，故我们需要重新创建分配节点空间，来进行连接。为寻找公共元素，每遍历A中的一个元素，都去
			与B中元素一一比较，同则取值给另一空间节点，连接到C上。时间复杂度为O(n^2)。
			因为这两个链表是递增有序的，那么我们可以设置两个指针同步比较，相同则加入c，不同小的那个往后移，直至到链表末尾
			这样的时间复杂度为O(n).
*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void linkCommon(Link *a, Link *b, Link *c ) {
//	struct Link *lc = c,*la=a->next,*lb=b->next,*rc=lc;
//	while (la) {
//		while (lb) {
//			if (la->data==lb->data) {//如果是公共元素
//				struct Link *p = (struct Link*)malloc(sizeof(struct Link));
//				p->data = la->data;
//				rc->next = p;//采用尾插法
//				rc = p;
//				break;
//			}
//			lb = lb->next;
//		}
//		la = la->next;
//		lb = b->next;
//	}
//	rc->next = NULL;//最后一个节点指针需要指向NULL。
//}
//void listCommon(Link *a,Link *b,Link *c) {
//	struct Link *rc = c, *la = a->next, *lb = b->next;
//	while (la&&lb) {
//		if (la->data==lb->data) {
//			struct Link *p = (struct Link*)malloc(sizeof(struct Link));
//			p->data = la->data;
//			p->next = NULL;
//			rc->next = p;
//			rc = p;
//			la = la->next;
//			lb = lb->next;
//		}
//		else {
//			la->data < lb->data ? la = la->next : lb = lb->next;
//		}
//	}
//	rc->next = NULL;
//}
//int main() {
//	struct Link *a, *b;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	a = createLink(0);
//	b = createLink(0);
//	struct Link *c = (struct Link*)malloc(sizeof(struct Link));
//	c->next = NULL;
//	//linkCommon(a,b,c);
//	listCommon(a,b,c);
//	printfNowLink(c);
//	return 0;
//}