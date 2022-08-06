///*
//	写出在中序线索二叉树里查找指定节点在后序的前驱结点的算法
//	分析：
//		在后序序列中，若节点p有右子女，则右子女是其前驱，若无右子女而有左子女，则左子女是其前驱。若节点p左右子女均无，
//		设其中序左线索指向某祖先节点f(p是f右子树中按中序遍历的第一个节点)，若f有左子女，则其左子女是节点p在后序中的前驱；
//		若f无左子女，则顺其前驱找双亲的双亲，一直找到双亲有左子女（此时左子女是p的前驱）。还有一种情况，若p是中序遍历的第
//		一个节点，则节点p在中序和后序下均没有前驱。
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//	int ltag, rtag;
//};
//#include <stdio.h>
//#include <stdlib.h>
//biTree *findPre(biTree *T,biTree *p) {//返回前驱结点
//	biTree *f;
//	if (p->rchild&&p->rtag==0) {//若该节点有右孩子，那么右子女是其前驱
//		return p->rchild;
//	}
//	else if(p->ltag==0&&p->lchild) {//若该节点只有左子女则左子女是其前驱
//		return p->lchild;
//	}
//	else {
//		f = p->lchild;//此时左线索指向某祖先节点
//		while (f&&f->ltag) {//如果该祖先节点没有左子女，继续找前驱
//			f = f->lchild;
//		}
//		if (f) {
//			return f->lchild;
//		}
//		else {
//			return NULL;
//		}
//	}
//}
//int main() {
//	biTree *T = (biTree *)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//	T = create(T);
//	void inThread(biTree *,biTree *);
//	inThread(T,NULL);//中序遍历建立线索
//
//	biTree *p = T->rchild->lchild,*pre=NULL;//手动指定一个节点
//	pre=findPre(T,p);
//	if (pre) {
//		printf("节点p%c的前驱结点值为：%c",p->data,pre->data);
//	}
//	else {
//		printf("节点p没有前驱结点");
//	}
//	return 0;
//}