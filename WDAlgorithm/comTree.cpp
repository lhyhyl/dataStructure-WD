///*
//	一颗二叉树以二叉链表的形式存储，编写一个算法判断其是否是一个完全二叉树
//	分析：
//		我们仍然可以借助队列来完成这件事，具体做法为：我们依次将二叉树从上到下，从左到右入栈，包括空节点，如遇空节点，
//		若队列非空，则判断其后是否还存在节点，若有，则该树为非完全二叉树。
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Squeue {
//	biTree data;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//bool isComplete(biTree *T, Squeue *sq, int maxSize) {
//	if (!T)return true;
//	bool enQueue(Squeue *, biTree *, int maxSize);
//	bool deQueue(Squeue *, biTree **, int maxSize);
//	bool isEmpty(Squeue *);
//	biTree *p = T;
//	biTree *r = ( biTree*)malloc(sizeof( biTree));
//	enQueue(sq, p, maxSize);//根节点入队
//	while (!isEmpty(sq)) {
//		deQueue(sq, &r, maxSize);//取出队首元素
//		if (r) {
//			enQueue(sq, r->lchild, maxSize);
//			enQueue(sq, r->rchild, maxSize);
//		}
//		else {
//			while (!isEmpty(sq)) {//如果已经来到了空节点，判断后续是否还有节点
//				deQueue(sq, &r, maxSize);//取出队首元素
//				if (r) {
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	int count = 0;
//	bool isCom;
//	biTree *T = ( biTree*)malloc(sizeof( biTree));
//	struct Squeue *sq;
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *, int *);
//
//	Squeue *createQueue(int);
//
//
//	T = create(T);//创建一颗二叉树
//	nodeNum(T, &count);//统计二叉树节点数量
//	sq = createQueue(count);//创建容量为二叉树节点个数大小的队列
//
//	isCom = isComplete(T, sq, count);
//	isCom ? printf("该二叉树是完全二叉树") : printf("该二叉树不是完全二叉树");
//	return 0;
//}