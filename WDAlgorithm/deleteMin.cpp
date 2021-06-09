/*
	删除链表中唯一的最小值
	分析：
		目前能想到的就是遍历整个链表，记录下最小节点的指针，然后进行删除，时间复杂度为O(n).
*/
struct Link {
	int data;
	struct Link* next;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void deleteMin(Link *p) {
	struct Link *preMinp = p, *minP = p->next,*preQ=p->next, *q = p->next->next,*f;
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
//int main() {
//		int n,data;
//		printf("请输入创建链表的节点个数：");
//		scanf("%d",&n);
//		struct Link *q;
//		struct Link *head =(struct Link*) malloc(sizeof(struct Link));
//		head->next = NULL;
//		q = head;
//		for (int i = 0; i < n;i++) {
//			struct Link *newP = (struct Link*) malloc(sizeof(struct Link));
//			printf("请输入第一个节点的值：");
//			scanf("%d",&data);
//			newP->data = data;
//			newP->next = NULL;
//			head->next = newP;
//			head = head->next;//head要始终指向最新节点
//		}
//		head->next = NULL;
//		head = q;//最后head要指向头结点
//		printf("打印链表：");
//		while (head->next) {
//			printf("%d ", head->next->data);
//			head = head->next;
//		}
//		head = q;
//		deleteMin(head);
//		printf("删除后链表值为：");
//		while (head->next) {
//			printf("%d ", head->next->data);
//			head = head->next;
//		}
//		return 0;
//}