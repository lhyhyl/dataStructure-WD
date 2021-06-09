/*
	设计一个算法判断一个链表是否有环
	分析：我们可以想象一下，在一个有环的赛道上，有两个人跑步，一个人跑得快，一个人跑得慢，试想，时间充足的情况下，跑得快
	的那个人是不是会再次遇到跑的慢的人呢？所以对于这道题，我们也可以通过快慢指针来处理，p指针一次移动两个节点，q指针一次移动
	一个节点，如果他们再次相遇了，说明链表有环，如果p指针为NULL了，说明无环。同时我们需要记录p、q各走的步数，用以确定
	环的入口点
*/
struct Link {
	union {
		int data;
	}type;
	struct Link *next;
};
#include <stdio.h>
Link *isLoop(Link *h) {
	struct Link *fast = h, *slow = h;
	while (slow&&fast&&fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {//再次相遇，说明有环
			break;
		}
	}
	if (slow==NULL||fast==NULL||fast->next==NULL) {
		return NULL;
	}
	fast = h;
	while (fast != slow) {
		fast = fast->next;
		slow = slow->next;
	}
	return fast;
}
//int main() {
//	struct Link *head,*l,*s;
//	int count = 0;
//	Link *createLink(int);
//	head = createLink(0);
//	l = head;
//	while (l->next) {
//		l = l->next;
//	}
//	l->next = head->next->next->next;//手动设置一个环
//	s=isLoop(head);
//	if (s) {
//		printf("链表环起始节点值为：%d",s->type.data);
//	}
//	else {
//		printf("该链表无环");
//	}
//	return 0;
//}