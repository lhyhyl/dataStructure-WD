
struct Link {
	union //这里采用了共用体，因为有时候我们要创建的数据类型不同
	{
		int data;
		char letter;
	} type;
	struct Link *next;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Link* createLink(int num) {
	int n, data;
	char letter;
	printf("请输入创建链表的节点个数：");
	scanf("%d", &n);
	struct Link *q;
	struct Link *head = (struct Link*) malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++) {
		struct Link *newP = (struct Link*) malloc(sizeof(struct Link));
		printf("请输入第%d个节点的值：",i+1);
		if (num==0) {
			scanf("%d", &data);
			newP->type.data = data;
		}
		else {
			getchar();
			scanf("%c", &letter);
			newP->type.letter = letter;
		}
		newP->next = NULL;
		head->next = newP;
		head = head->next;//head要始终指向最新节点
	}
	head->next = NULL;
	head = q;//最后head要指向头结点
	printf("打印链表：");
	printf("\n");
	while (head->next) {
		if (num==0) {
			printf("%d ", head->next->type.data);
		}
		else {
			printf("%c", head->next->type.letter);
		}
		
		head = head->next;
	}
	printf("\n");
	head = q;
	return head;
}