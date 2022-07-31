///*
//	设计一个递归算法，删除一个不带头结点的单链表中所有值为x的节点
//	分析：
//		首先我们要创建单链表，并赋值，然后递归去判断值，进行删除
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct Link
//{
//	int value;
//	struct Link *next;
//};
//void deleteX(Link *&p, int delNum) {//这里的第一个函数参数必须是引用值，不然会导致断链
//	struct Link *pre;//定义一个指针，进行删除
//	if (p == NULL) return;
//	if (p->value == delNum) {
//		pre = p;
//		p = p->next;
//		free(pre);
//		deleteX(p, delNum);
//	}
//	else
//		deleteX(p->next, delNum);
//}
//Link *create() {
//	struct Link *p, *rear, *head;
//	head = (Link *)malloc(sizeof(Link));
//	rear = (Link *)malloc(sizeof(Link));
//	head = NULL;
//	rear = NULL;
//	int value;
//	printf("请输入链表各节点的值，以9999结束：");
//	scanf("%d", &value);
//	while (value != 9999) {//依次创建节点
//		p = (Link *)malloc(sizeof(Link));//创建一个新的节点
//		p->value = value;
//		p->next = NULL;
//		if (head == NULL) {
//			rear = p;
//			head = p;
//		}
//		else {
//			rear->next = p;
//			rear = p;
//		}
//		scanf("%d", &value);
//	}
//	rear->next = NULL;
//	return head;
//}
//Link *create2() {
//	struct Link *p, *rear, *head;
//	head = (Link *)malloc(sizeof(Link));
//	head = NULL;
//	int value;
//	printf("请输入链表各节点的值，以9999结束：");
//	scanf("%d", &value);
//	while (value != 9999) {//依次创建节点
//		p = (Link *)malloc(sizeof(Link));
//		p->value = value;
//		p->next = NULL;
//		if (head == NULL) {
//			head = p;
//		}
//		else {
//
//			p->next = head->next;
//			head->next = p;
//		}
//
//		scanf("%d", &value);
//	}
//	return head;
//}
//int main() {
//	int delNum;
//	struct Link *head, *q;
//	head = create();
//	q = head;
//	printf("打印链表：");
//	while (q != NULL) {
//		printf("%d ", q->value);
//		q = q->next;
//	}
//	q = head;
//	printf("请输入想要删除的节点的值：");
//	scanf("%d", &delNum);
//	deleteX(q, delNum);
//	printf("删除后链表：");
//	while (q != NULL) {
//		printf("%d ", q->value);
//		q = q->next;
//	}
//	return 0;
//}