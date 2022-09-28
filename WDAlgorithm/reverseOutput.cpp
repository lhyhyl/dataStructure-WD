///*
//	有一带头结点的链表，设计一算法从尾到头的输出每个节点的值。
//	分析：
//		这种类型就有点像是栈的性质，我们可以利用递归来处理，出口便是尾元素
//*/
//struct Link {
//	int data;
//	Link* next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void reverseOutput(Link *p) {
//	if (p == NULL) return;
//	else {
//		reverseOutput(p->next);
//		printf("%d ",p->data);
//	}
//	
//}
//int main() {
//	int n,data;
//	//创建链表
//	Link* head = (Link*)malloc(sizeof(Link));
//	Link* createLink(int);
//	head = createLink(0);
//	reverseOutput(head->next);
//	return 0;
//}