///*
//	���һ���ݹ��㷨��ɾ��һ������ͷ���ĵ�����������ֵΪx�Ľڵ�
//	������
//		��������Ҫ��������������ֵ��Ȼ��ݹ�ȥ�ж�ֵ������ɾ��
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct Link
//{
//	int value;
//	Link *next;
//};
//void deleteX(Link *&p, int delNum) {//����ĵ�һ��������������������ֵ����Ȼ�ᵼ�¶���
//	Link *pre;//����һ��ָ�룬����ɾ��
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
//	Link *p, *rear, *head;
//	head = (Link *)malloc(sizeof(Link));
//	rear = (Link *)malloc(sizeof(Link));
//	head = NULL;
//	rear = NULL;
//	int value;
//	printf("������������ڵ��ֵ����9999������");
//	scanf("%d", &value);
//	while (value != 9999) {//���δ����ڵ�
//		p = (Link *)malloc(sizeof(Link));//����һ���µĽڵ�
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
//	Link *p, *rear, *head;
//	head = (Link *)malloc(sizeof(Link));
//	head = NULL;
//	int value;
//	printf("������������ڵ��ֵ����9999������");
//	scanf("%d", &value);
//	while (value != 9999) {//���δ����ڵ�
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
//	Link *head, *q;
//	head = create();
//	q = head;
//	printf("��ӡ����");
//	while (q != NULL) {
//		printf("%d ", q->value);
//		q = q->next;
//	}
//	q = head;
//	printf("��������Ҫɾ���Ľڵ��ֵ��");
//	scanf("%d", &delNum);
//	deleteX(q, delNum);
//	printf("ɾ��������");
//	while (q != NULL) {
//		printf("%d ", q->value);
//		q = q->next;
//	}
//	return 0;
//}