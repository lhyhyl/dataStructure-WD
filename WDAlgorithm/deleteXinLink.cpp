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
//	struct Link *next;
//};
//void deleteX(Link *&p, int delNum) {//����ĵ�һ��������������������ֵ����Ȼ�ᵼ�¶���
//	struct Link *pre;//����һ��ָ�룬����ɾ��
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
//	int count = 0;
//	rear = (struct Link *)malloc(sizeof(struct Link));
//	head = (struct Link *)malloc(sizeof(struct Link));
//	int value;
//	printf("������������ڵ��ֵ����9999������");
//	scanf("%d", &value);
//	while (value != 9999) {//���δ����ڵ�
//		p = (struct Link *)malloc(sizeof(struct Link));//����һ���µĽڵ�
//		p->value = value;
//		p->next = NULL;
//		if (count++ == 0) {
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
//	head = (struct Link *)malloc(sizeof(struct Link));
//	rear = (struct Link *)malloc(sizeof(struct Link));
//	head = rear = NULL;
//	int value;
//	printf("������������ڵ��ֵ����9999������");
//	scanf("%d", &value);
//	int count = 0;
//	while (value != 9999) {//���δ����ڵ�
//		p = (struct Link *)malloc(sizeof(struct Link));
//		p->value = value;
//		
//		if (head == NULL) {
//			head = p;
//			rear = p;
//		}
//		else {
//			p->next = head->next;
//			head->next = p;
//			rear = p;
//			if (count++==0) {
//				rear->next = NULL;
//			}
//		}
//
//		scanf("%d", &value);
//	}
//	return head;
//}
//int main() {
//	int delNum;
//	struct Link *head, *q;
//	head = create2();
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