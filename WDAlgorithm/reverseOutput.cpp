/*
	��һ��ͷ�����������һ�㷨��β��ͷ�����ÿ���ڵ��ֵ��
	������
		�������;��е�����ջ�����ʣ����ǿ������õݹ����������ڱ���βԪ��
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
//	printf("�����봴������Ľڵ������");
//	scanf("%d",&n);
//	struct Link *q;
//	struct Link *head =(struct Link*) malloc(sizeof(struct Link));
//	head->next = NULL;
//	q = head;
//	for (int i = 0; i < n;i++) {
//		struct Link *newP = (struct Link*) malloc(sizeof(struct Link));
//		printf("�������һ���ڵ��ֵ��");
//		scanf("%d",&data);
//		newP->data = data;
//		newP->next = NULL;
//		head->next = newP;
//		head = head->next;//headҪʼ��ָ�����½ڵ�
//	}
//	head->next = NULL;
//	head = q;//���headҪָ��ͷ���
//	reverseOutput(head->next);
//	return 0;
//}