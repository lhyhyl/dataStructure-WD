/*
	ɾ��������Ψһ����Сֵ
	������
		Ŀǰ���뵽�ľ��Ǳ�������������¼����С�ڵ��ָ�룬Ȼ�����ɾ����ʱ�临�Ӷ�ΪO(n).
*/
struct Link {
	int data;
	struct Link* next;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void deleteMin(Link *p) {
	struct Link *preMinp = p, *minP = p->next,*preQ=p->next, *q = p->next->next,*f;
	while (q) {
		if (q->data < minP->data) {//����ȵ�ǰֵ��С
			minP = q;//����
			preMinp = preQ;//ǰ��һ�����
		}
		preQ = q;//����ǰ��
		q = q->next;
	}
	f = minP;
	preMinp->next = minP->next;//ɾ��
	free(f);//�ͷ�

}
//int main() {
//		int n,data;
//		printf("�����봴������Ľڵ������");
//		scanf("%d",&n);
//		struct Link *q;
//		struct Link *head =(struct Link*) malloc(sizeof(struct Link));
//		head->next = NULL;
//		q = head;
//		for (int i = 0; i < n;i++) {
//			struct Link *newP = (struct Link*) malloc(sizeof(struct Link));
//			printf("�������һ���ڵ��ֵ��");
//			scanf("%d",&data);
//			newP->data = data;
//			newP->next = NULL;
//			head->next = newP;
//			head = head->next;//headҪʼ��ָ�����½ڵ�
//		}
//		head->next = NULL;
//		head = q;//���headҪָ��ͷ���
//		printf("��ӡ����");
//		while (head->next) {
//			printf("%d ", head->next->data);
//			head = head->next;
//		}
//		head = q;
//		deleteMin(head);
//		printf("ɾ��������ֵΪ��");
//		while (head->next) {
//			printf("%d ", head->next->data);
//			head = head->next;
//		}
//		return 0;
//}