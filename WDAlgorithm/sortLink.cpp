/*
	有一个带头结点的单链表L，设计一个算法使其递增有序
	分析：
		我们可以采用冒泡排序对其操作，使其递增有序,时间复杂度为O(n^2)。
*/

//struct Link {
//	int data;
//	Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void bubbleSort(Link *h) {//冒泡排序
//	int flag = 0;//排序标志，产生过变动就置为1
//	int count = 0;//记录链表长度
//	Link *pre=h, *p = h->next,*r;
//	while (p) {
//		count++;
//		p = p->next;
//	}
//	p = h->next;
//	for (int i = 0; i < count;i++) {
//		flag = 0;
//		while (p->next) {//开始第i+1轮冒泡
//			if (p->data > p->next->data) {//前者大于后者，则需要交换
//				r = p->next->next;//r指向下一个节点，防止断链
//				pre->next = p->next;
//				p->next->next = p;
//				pre = p->next;
//				p->next = r;
//				flag = 1;//有改动，flag置为1
//			}
//			else {
//				pre = p;
//				p = p->next;
//			}
//		}
//		if (!flag) break;//若某一轮链表未作变换，则认定已经排好序，退出循环
//		pre = h;//重新从头开始遍历
//		p = h->next;
//	}
//}
//int main() {
//	Link* createLink(int);
//	Link *head;
//	head = createLink(0);
//	bubbleSort(head);
//	printf("排序后链表值为：");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}
