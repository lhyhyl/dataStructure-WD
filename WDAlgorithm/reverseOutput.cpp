/*
	有一带头结点的链表，设计一算法从尾到头的输出每个节点的值。
	分析：
		这种类型就有点像是栈的性质，我们可以利用递归来处理，出口便是尾元素
*/
//struct Link {
//	int data;
//	struct Link* next;
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
//	printf("请输入创建链表的节点个数：");
//	scanf("%d",&n);
//	struct Link *q;
//	struct Link *head =(struct Link*) malloc(sizeof(struct Link));
//	head->next = NULL;
//	q = head;
//	for (int i = 0; i < n;i++) {
//		struct Link *newP = (struct Link*) malloc(sizeof(struct Link));
//		printf("请输入第一个节点的值：");
//		scanf("%d",&data);
//		newP->data = data;
//		newP->next = NULL;
//		head->next = newP;
//		head = head->next;//head要始终指向最新节点
//	}
//	head->next = NULL;
//	head = q;//最后head要指向头结点
//	reverseOutput(head->next);
//	return 0;
//}