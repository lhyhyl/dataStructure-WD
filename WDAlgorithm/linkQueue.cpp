/*
	���ļ����ڴ���һ����ʽ����
	������
		������Ҫ����һ������Ȼ������front��rearָ�룬����ģ����ӳ��ӵĹ���
*/
#define TYPE int
struct biTree {//�������ڵ�
	char data;
	struct biTree *lchild;
	struct biTree *rchild;

};
struct Link {
	//TYPE data;
	TYPE node;
	struct Link *next;
};
struct LinkQueue {
	struct Link *front, *rear;
};
#include <stdio.h>
#include <stdlib.h>

//����һ��������
Link* createLink() {
	int n, data;
	char letter;
	struct Link *q;
	struct Link *head = (struct Link*) malloc(sizeof(struct Link));
	head->next = NULL;
	q = head;
	return head;
}
//��������
LinkQueue *create() {
	struct Link *h,*p;
	struct LinkQueue *lq=(struct LinkQueue *)malloc(sizeof(struct LinkQueue));
	h = createLink();
	p = h->next;
	lq->front = lq->rear = h;
	return lq;
}
//�жϿ�
bool isEmpty(LinkQueue *lq) {
	return lq->front == lq->rear;
}
//���
bool enQueue(LinkQueue *lq,TYPE data) {//��β����
	struct Link *newd = (struct Link *)malloc(sizeof(struct Link));
	newd->node = data;
	lq->rear->next = newd;
	lq->rear = newd;
	lq->rear->next = NULL;
	return true;
}
//����
bool deQueue(LinkQueue *lq,TYPE *data) {
	if (isEmpty(lq))return false;
	struct Link *p = lq->front->next;//������һ���ڵ�
	*data = lq->front->next->node;//ȡ�����׽ڵ�ֵ
	lq->front->next = p->next;//ɾ�����׽ڵ�
	if (lq->rear==p) {
		lq->rear = lq->front;
	}
	free(p);
	return true;
}
//���(һ�����ڵ�)
//bool enQueueN(LinkQueue *lq, TYPE *node) {//��β����
//	struct Link *newd = (struct Link *)malloc(sizeof(struct Link));
//	newd->node.data = node->data;
//	newd->node.lchild = node->lchild;
//	newd->node.rchild = node->rchild;
//	lq->rear->next = newd;
//	lq->rear = newd;
//	return true;
//}
//����(һ�����ڵ�)
//bool deQueueN(LinkQueue *lq, TYPE *node) {
//	if (isEmpty(lq))return false;
//	struct Link *p = lq->front->next;//������һ���ڵ�
//	*node = lq->front->next->node;//ȡ�����׽ڵ�ֵ
//	lq->front->next = p->next;//ɾ�����׽ڵ�
//	if (lq->rear == p) {
//		lq->rear = lq->front;
//	}
//	free(p);
//	return true;
//}

//��ӡ������Ԫ��
void printQ(LinkQueue *lq) {
	Link *p = lq->front->next;
	while (p!=NULL) {
		printf("%c",p->node);
		p = p->next;
	}
};