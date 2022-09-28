/*
	删除链表中唯一的最小值
	分析：
		目前能想到的就是遍历整个链表，记录下最小节点的指针，然后进行删除，时间复杂度为O(n).
*/
struct Link {
	int data;
	Link* next;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void deleteMin(Link *p) {
	Link *preMinp = p, *minP = p->next,*preQ=p->next, *q = p->next->next,*f;
	while (q) {
		if (q->data < minP->data) {//如果比当前值更小
			minP = q;//更换
			preMinp = preQ;//前驱一起更换
		}
		preQ = q;//继续前进
		q = q->next;
	}
	f = minP;
	preMinp->next = minP->next;//删除
	free(f);//释放

}
int main() {
		int n,data;
		//创建链表
		Link* head = (Link*)malloc(sizeof(Link));
		Link* createLink(int);
		void printfNowLink(Link*);
		head = createLink(0);
		deleteMin(head);
		printfNowLink(head);
		return 0;
}