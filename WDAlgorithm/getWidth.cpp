///*
//	假设二叉树采用二叉链表存储结构，设计一个算法，求非空二叉树的宽度（即具有节点数最多的那一层的节点个数）
//	分析：
//		这道题和求高度那道题大同小异。我们仍然可以采取层次遍历，统计每一层的节点个数，找到宽度最大的那一层。
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//
//};
//struct LinkQueue {//上次求高度采用的是顺序队列，这次采用链式队列，雨露均沾哈哈
//	struct Link *front, *rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getWidth(biTree *b, LinkQueue *lq) {
//	int oldNum = 0, curNum = 0, width = 0;
//	bool enQueue(LinkQueue *lq, biTree *node);
//	bool deQueue(LinkQueue *lq, biTree **node);
//	bool isEmpty(LinkQueue *lq);
//	struct biTree *p = b;
//	struct biTree *r=(struct biTree*)malloc(sizeof(struct biTree));
//	if (p) {
//		enQueue(lq, p);//入队
//		oldNum++;
//		width = 1;
//		while (!isEmpty(lq)) {
//			while (oldNum--) {
//				deQueue(lq, &r);//队首元素出队
//				if (r->lchild) {//若有左孩子，将左孩子入队
//					enQueue(lq, r->lchild);
//					curNum++;//当前队列元素加1
//				}
//				if (r->rchild) {//若有右孩子，将右孩子入队
//					enQueue(lq, r->rchild);
//					curNum++;//当前队列元素加1
//				}
//			}
//			curNum > width ? width = curNum : NULL;//如果当前队列元素多于之前的，宽度变更
//			oldNum = curNum;//继续进行操作
//			curNum = 0;
//
//		}
//
//	}
//	return width;
//}
//int main() {
//	struct biTree *b = (struct biTree*)malloc(sizeof(struct biTree));
//	struct LinkQueue *lq;
//
//	biTree *create(biTree *);
//	b = create(b);//创建一颗二叉树
//
//	LinkQueue *create();
//	lq = create();//创建链式队列
//
//	printf("该二叉树的宽度为：%d",getWidth(b, lq));
//	return 0;
//}