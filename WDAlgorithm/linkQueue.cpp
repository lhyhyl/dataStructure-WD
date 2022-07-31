/*
	此文件用于创建一个链式队列
	分析：
		我们需要创建一个链表，然后设置front、rear指针，用来模拟入队出队的过程
*/
//#define TYPE biTree* 
#define TYPE char
//#define TYPE int
struct biTree {//新增树节点
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

//创建一个空链表
Link* createLink() {
	int n, data;
	char letter;
	Link *q;
	Link *head = (Link*) malloc(sizeof(Link));
	head->next = NULL;
	q = head;
	return head;
}
//创建链队
LinkQueue *create() {
	Link *h,*p;
	LinkQueue *lq=(LinkQueue *)malloc(sizeof(LinkQueue));
	h = createLink();
	p = h->next;
	lq->front = lq->rear = h;
	return lq;
}
//判断空
bool isEmpty(LinkQueue *lq) {
	return lq->front == lq->rear;
}
//入队
bool enQueue(LinkQueue *lq,TYPE data) {//队尾插入
	Link *newd = (Link *)malloc(sizeof(Link));
	newd->node = data;
	lq->rear->next = newd;
	lq->rear = newd;
	lq->rear->next = NULL;
	return true;
}
//出队
bool deQueue(LinkQueue *lq,TYPE *data) {
	if (isEmpty(lq))return false;
	Link *p = lq->front->next;//保存下一个节点
	*data = lq->front->next->node;//取出队首节点值
	lq->front->next = p->next;//删除队首节点
	if (lq->rear==p) {
		lq->rear = lq->front;
	}
	free(p);
	return true;
}
//打印队列中元素
void printQ(LinkQueue *lq) {
	Link *p = lq->front->next;
	while (p!=NULL) {
		printf("%c",p->node);
		p = p->next;
	}
};