/*
	��д����α������㷨
	������
		�������������ֵ�������Ҫһ��һ��ı������������Ǿ���Ҫ�õ������������ݽṹ�ˣ����������ǣ�
		�Ƚ����ڵ���ӣ�Ȼ����ڵ���ӣ������ν����ڵ�����ӡ��Һ�����ӡ��������ѭ����ֱ���ӿ�
*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void levelOrder(biTree *T,Squeue *sq,int maxSize) {
//	struct biTree *p = T;
//	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
//	bool enQueueS(Squeue *, biTree *, int);
//	bool isEmpty(Squeue *);
//	bool deQueueS(Squeue *, biTree *,int);
//	enQueueS(sq,p,maxSize);
//	while (!isEmpty(sq)) {
//		deQueueS(sq,r,maxSize);
//		printf("%c ",r->data);
//		if(r->lchild)enQueueS(sq, r->lchild, maxSize);
//		if (r->rchild)enQueueS(sq, r->rchild, maxSize);
//	}
//}
//int main() {
//	int count = 0;
//	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree));
//	struct Squeue *sq = (struct Squeue *)malloc(sizeof(struct Squeue));
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *,int *);
//
//	Squeue *createQueue(int);
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T,&count);//ͳ�ƶ������ڵ����
//	sq = createQueue(count);
//
//	levelOrder(T,sq,count);
//	return 0;
//}