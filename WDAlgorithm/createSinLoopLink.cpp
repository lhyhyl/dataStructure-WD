#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
struct Link {
	int data;
	struct Link *next;
};
Link *createSinLoopLink() {
	int n, data;
	struct Link *head = (struct Link *)malloc(sizeof(struct Link));
	head->next = NULL;
	struct Link *p = head;
	printf("������ڵ������n=");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("�������%d���ڵ�ֵ:", i + 1);
		scanf("%d", &data);
		struct Link *newP = (struct Link*)malloc(sizeof(struct Link));
		newP->data = data;
		p->next = newP;
		p = newP;
	}
	p->next = head;
	return head;
}