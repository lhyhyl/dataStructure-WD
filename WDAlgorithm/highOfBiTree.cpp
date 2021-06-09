/*
	假设二叉树采用二叉链表存储结构，设计一个非递归算法求二叉树的高度
	分析：
		若要采用非递归的方式来求得二叉树的高度，我们采用层次遍历是最合适的，因为这一层一层的不就很好数吗哈哈。具体实现：
		这里唯一的难点就在于我们如何得知高度该加一了；我们可以设置一个标志num用来记录每一层入栈的节点个数，当我们出栈数
		达到该数值时也就意味着我们的高度该加一了
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
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getHigh(biTree *T,Squeue *sq,int maxSize) {
//	int oldNum=0,curNum=0,high=0;//记录一层有多少节点
//	struct biTree *p = T;
//	struct biTree *r=(struct biTree *)malloc(sizeof(struct biTree));
//	bool enQueueS(Squeue *, biTree *, int );
//	bool isEmpty(Squeue *);
//	bool deQueueS(Squeue *, biTree *, int);
//
//	enQueueS(sq,p,maxSize);//将根节点入队
//	oldNum++;//此时队列中只有一个节点
//
//	while (!isEmpty(sq)) {
//		deQueueS(sq,r,maxSize);//取出队首元素
//		if (r->lchild) {
//			curNum++;//下一层的节点数+1
//			enQueueS(sq, r->lchild, maxSize);//将根节点入队
//		}
//		if (r->rchild) {
//			curNum++;//下一层的节点数+1
//			enQueueS(sq, r->rchild, maxSize);//将根节点入队
//		}
//		if (!--oldNum) {//如果一层的元素已取完，高度+1
//			high++;
//			oldNum = curNum;//当oldNum=0时，将下一层的节点数赋给它
//			curNum = 0;//下一层节点归零
//		}
//		
//	}
//	return high;
//}
//int main() {
//	int count=0;
//	//创建二叉树、队列
//	struct biTree *T=(struct biTree *)malloc(sizeof(struct biTree));
//	struct Squeue *sq;
//	biTree *create(biTree *);
//	void nodeNum(biTree *,int *);
//	Squeue *createQueue(int);
//	T = create(T);
//	nodeNum(T,&count);
//	sq = createQueue(count);//创建一个大小为树节点个数的队列
//
//	printf("该二叉树的高度为：%d",getHigh(T, sq, count));
//	return 0;
//}