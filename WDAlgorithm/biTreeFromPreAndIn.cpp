///*
//	设一个二叉树各节点的值互不相同，其先序遍历序列和中序遍历序列分别存于两个一维数组A、B中，试编写算法建立该二叉树的二叉链表
//	分析：
//		这是一个典型的已知中序和先序求二叉树的案例，具体实现步骤如下：
//		1、先根据先序序列确定树的根节点
//		2、根据根节点在中序在中序序列中划分出二叉树的左右子树包含哪些节点，然后根据左右子树节点在先序序列中的次序确定子树的
//		的根节点，即回到步骤一。
//		如此重复，直到每颗子树仅有一个节点为止
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//biTree *preInCreate(char *arrIn,char *arrPre,int l1,int h1,int l2,int h2) {
//	//l1 h1 为中序的第一和最后一个节点下标，l2 h2 为先序的第一和最后一个节点下标
//	int llen, rlen,i;//左子树、右子树长度
//	struct biTree *root = (struct biTree *)malloc(sizeof(struct biTree));
//	root->data = *(arrPre + l2);
//	for (i = l1; *(arrIn + i) != root->data; i++);//找到根节点在中序序列的位置
//	
//	llen = i - l1;//记录左边节点个数
//	rlen = h1 - i;//记录根节点右边节点个数
//	if (llen) {
//		root->lchild = preInCreate(arrIn,arrPre,l1,l1+llen-1,l2+1,l2+llen);//把左边的序列有看做一个新的继续找根节点
//	}
//	else {
//		root->lchild = NULL;
//	}
//	if (rlen) {
//		root->rchild = preInCreate(arrIn, arrPre, h1-llen+1, h1, h2-llen+1, h2);//把右边的序列有看做一个新的继续找根节点
//	}
//	else {
//		root->rchild = NULL;
//	}
//	return root;
//}
//int main() {
//	char arrIn[] = { 'D','B','E','A','F','C','G' }, 
//		arrPre[] = {'A','B','D','E','C','F','G'};
//	struct biTree *root;
//	void inOrder(biTree *);
//	void preOrder(biTree *);
//	root = preInCreate(arrIn,arrPre,0,6,0,6);
//	inOrder(root);
//	printf("\n");
//	preOrder(root);
//
//	return 0;
//}