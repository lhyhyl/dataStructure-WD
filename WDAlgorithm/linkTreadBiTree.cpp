/*
	该文件用于创建三类线索二叉树，即中序线索二叉树、先序线索二叉树、后序线索二叉树
*/
struct biTree {
	char data;
	biTree *lchild;
	biTree *rchild;
	int ltag, rtag;//用于进行标记
};
#include <stdio.h>
extern biTree* pre = NULL;
void inThread(biTree *p ) {//中序线索二叉树
	if (p!=NULL) {
		inThread(p->lchild);
		if (p->lchild==NULL) {//如果左子树为空，建立前驱线索
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre!=NULL && pre->rchild==NULL) {//建立前驱结点的后继线索
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->rchild);
	}
}
void preThread(biTree *p) {//先序线索二叉树
	if (p != NULL) {

		if (p->lchild == NULL) {//如果左子树为空，建立前驱线索
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {//建立前驱结点的后继线索
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->lchild);
		inThread(p->rchild);
	}
}
void postThread(biTree *p) {//后序线索二叉树
	if (p != NULL) {
		inThread(p->lchild);
		inThread(p->rchild);
		if (p->lchild == NULL) {//如果左子树为空，建立前驱线索
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {//建立前驱结点的后继线索
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		
	}
}