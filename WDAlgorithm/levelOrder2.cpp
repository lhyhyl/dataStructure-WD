///*
//	�Ը��������������¶��ϡ����ҵ���Ĳ�α����㷨
//	������
//		����ֻ��Ҫ�ڲ�α����Ļ����ϼ���ջ��ʹ�ã�����ÿ�γ��Ӻ�����ݽ�����ջ�����п���ʱ����ȥ���η���ջ��Ԫ�أ����ɴﵽҪ��
//
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void levelOrder2(biTree *T, Squeue *sq, int maxSize) {
//	Stack *s = (Stack *)malloc(sizeof(Stack));
//	biTree *p = T;
//	biTree *r = (biTree *)malloc(sizeof(biTree));
//	bool enQueue(Squeue *, biTree *, int);
//	bool isEmpty(Squeue *);
//	bool deQueue(Squeue *, biTree **, int);
//
//	Stack *createStack(int);
//	bool push(Stack *,biTree *);
//	bool empty(Stack *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//
//	s = createStack(maxSize);
//	enQueue(sq, p, maxSize);
//	while (!isEmpty(sq)) {
//		deQueue(sq, &r, maxSize);
//		push(s,r);
//		if (r->lchild)enQueue(sq, r->lchild, maxSize);
//		if (r->rchild)enQueue(sq, r->rchild, maxSize);
//	}
//	while (!empty(s)) {
//		r = top(s);
//		printf("%c ",r->data);
//		pop(s);
//	}
//
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Squeue *sq = (Squeue *)malloc(sizeof(Squeue));
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *, int *);
//
//	Squeue *createQueue(int);
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T, &count);//ͳ�ƶ������ڵ����
//	sq = createQueue(count);
//
//	levelOrder2(T, sq, count);
//	return 0;
//}