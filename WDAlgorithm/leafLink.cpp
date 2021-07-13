///*
//	设计一个算法将二叉树的叶节点按从左到右的顺序连成一个单链表，表头指针为head。二叉树按二叉链表方式存储，连接时用叶节点的
//	右指针来存放单链表指针。
//	分析：
//		我们要将叶节点连起来，那么我们首先要按从左至右的顺序找出叶节点，要满足这样的出场顺序，可以采用先序，中序，后序，
//		这里我们采用中序遍历。
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//struct biTree *h = (struct biTree *)malloc(sizeof(struct biTree));//创建一个头结点
//struct biTree *pre = h;
//biTree *leafLink(biTree *b) {//将二叉树b中的所有叶子结点连起来
//	if (b) {
//		leafLink(b->lchild);//中序遍历左子树
//		if (!b->lchild && !b->rchild) {//叶节点
//				pre->rchild = b;
//				pre = b;
//			
//		}
//		leafLink(b->rchild);//中序遍历右子树
//		pre->rchild = NULL;//设置链表尾
//	}
//	return h;
//}
//int main() {
//	struct biTree *b = (struct biTree *)malloc(sizeof(struct biTree ));
//	biTree *create(biTree *);
//	b = create(b);//创建一颗二叉树
//	leafLink(b);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}