/*
	�Ը��������������¶��ϡ����ҵ���Ĳ�α����㷨
	������
		����ֻ��Ҫ�ڲ�α����Ļ����ϼ���ջ��ʹ�ã�����ÿ�γ��Ӻ�����ݽ�����ջ�����п���ʱ����ȥ���η���ջ��Ԫ�أ����ɴﵽҪ��

*/
struct biTree {
	char data;
	struct biTree *lchild;
	struct biTree *rchild;
};
struct Squeue {
	biTree *arr;
	int front, rear;
};
struct Stack {
	biTree *arr;
	int len;
	int top;
};
#include <stdio.h>
#include <stdlib.h>
void levelOrder2(biTree *T, Squeue *sq, int maxSize) {
	struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
	struct biTree *p = T;
	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
	bool enQueueS(Squeue *, biTree *, int);
	bool isEmpty(Squeue *);
	bool deQueueS(Squeue *, biTree *, int);

	Stack *createStack(int);
	bool pushS(Stack *,biTree *);
	bool empty(Stack *);
	biTree *top(Stack *);
	bool pop(Stack *);

	s = createStack(maxSize);
	enQueueS(sq, p, maxSize);
	while (!isEmpty(sq)) {
		deQueueS(sq, r, maxSize);
		pushS(s,r);
		if (r->lchild)enQueueS(sq, r->lchild, maxSize);
		if (r->rchild)enQueueS(sq, r->rchild, maxSize);
	}
	while (!empty(s)) {
		r = top(s);
		printf("%c ",r->data);
		pop(s);
	}

}
int main() {
	int count = 0;
	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree));
	struct Squeue *sq = (struct Squeue *)malloc(sizeof(struct Squeue));

	biTree *create(biTree *);
	void nodeNum(biTree *, int *);

	Squeue *createQueue(int);
	T = create(T);//����һ�Ŷ�����
	nodeNum(T, &count);//ͳ�ƶ������ڵ����
	sq = createQueue(count);

	levelOrder2(T, sq, count);
	return 0;
}