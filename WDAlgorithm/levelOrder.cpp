/*
	试写出层次遍历的算法
	分析：
		正如名字所表现的那样，要一层一层的遍历，这里我们就需要用到队列这种数据结构了，具体做法是：
		先将根节点入队，然后根节点出队，并依次将根节点的左孩子、右孩子入队。后续如此循环，直至队空
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
//	T = create(T);//创建一颗二叉树
//	nodeNum(T,&count);//统计二叉树节点个数
//	sq = createQueue(count);
//
//	levelOrder(T,sq,count);
//	return 0;
//}