///*
//	试设计判断两课二叉树是否相似的算法。所谓二叉树T1和T2相似，指的是T1和T2都是空的二叉树或只有一个根节点；或二者左子树相似
//	且左子树相似
//	分析：
//		典型的要采取递归来处理
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//#include <stdlib.h>
//#include <stdio.h>
//bool isSimilar(biTree *T1, biTree *T2) {
//	if (!T1 && !T2) {//T1,T2都是空的二叉树
//		return true;
//	}
//	else if (!T1 || !T2) {//T1,T2只有一个为空，则不相似
//		return false;
//	}
//	else {
//		if (isSimilar(T1->lchild, T2->lchild) && isSimilar(T1->rchild, T2->rchild))//左右子树均相似，才相似
//			return true;
//		else
//			return false;
//	}
//
//}
//int main() {
//	struct biTree *T1 = (struct biTree *)malloc(sizeof(struct biTree));
//	struct biTree *T2 = (struct biTree *)malloc(sizeof(struct biTree));
//
//	biTree *create(biTree *);
//	printf("第一棵树数据：\n");
//
//	T1 = create(T1);
//	printf("\n");
//	printf("第二棵树数据：\n");
//	T2 = create(T2);
//
//	isSimilar(T1, T2) ? printf("相似") : printf("不相似");
//	return 0;
//}