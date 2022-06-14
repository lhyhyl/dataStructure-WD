///*
//	试编写一个算法将一颗二叉树的所有节点的左右子树进行交换。
//	分析：
//		我们仍然可以采用递归的方式进行交换
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void swapTree(biTree *T) {//其本质就是从叶子节点开始进行交换，一路推进到根节点
//	struct biTree *p = T,*t;
//	if (!p) return;
//	if (!p->lchild&&!p->rchild) {//如果没有左右孩子，就不需要交换了，直接返回
//		return;
//	}
//	else {
//		swapTree(p->lchild);//交换左子树
//		swapTree(p->rchild);//交换右子树   这里不能采取中序遍历
//		t = p->lchild;
//		p->lchild = p->rchild;
//		p->rchild = t;
//	}
//}
//int main() {
//	int num;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//	void inOrder(biTree *);
//	T = create(T);//创建一颗二叉树
//	inOrder(T);
//	printf("\n");
//	swapTree(T);
//	inOrder(T);
//	return 0;
//}