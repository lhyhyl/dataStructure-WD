/*
	设计一个算法判断带头结点的循环双链表是否对称
	分析：
		简单分析，我们可以设置两个指针，pre和next，从头结点出发，进行比较，若pre与next所指值不同，则不对称，若pre和next指向了同一个节点
		则该循环双链表对称
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
//	while (pre!=next&&pre->pre!=next) {//此时存在两种情况，奇数个节点和偶数个节点都要考虑
//		if (pre->data!=next->data) {
//			printf("该循环双链表不对称");
//			break;
//		}
//		else {
//			pre = pre->pre;
//			next = next->next;
//		}
//	}
//	if (pre==next||pre->pre==next) {
//		printf("该循环双链表对称");
//	}
//}
//int main() {
//	struct Link *head;
//	Link *createDouLoopLink();
//	head = createDouLoopLink();
//	isSymmetry(head);
//	return 0;
//}