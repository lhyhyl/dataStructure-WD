
struct Link {
	union //��������˹����壬��Ϊ��ʱ������Ҫ�������������Ͳ�ͬ
	{
		int data;
		char letter;
	} type;
	Link *next;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
Link* createLink(int num) {
	int n, data;
	char letter;
	printf("�����봴������Ľڵ������");
	scanf("%d", &n);
	Link *q;
	Link *head = (Link*) malloc(sizeof(Link));
	head->next = NULL;
	q = head;
	for (int i = 0; i < n; i++) {
		Link *newP = (Link*) malloc(sizeof(Link));
		printf("�������%d���ڵ��ֵ��",i+1);
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
		head = head->next;//headҪʼ��ָ�����½ڵ�
	}
	head->next = NULL;
	head = q;//���headҪָ��ͷ���
	printf("��ӡ����");
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