///*
//	设有一颗满二叉树（所有节点值均不同），已知其先序序列为pre，设计一个算法求其后序序列post
//	分析：
//		题目已经告诉我们是一颗满二叉树，那我们就可以从先序序列推出后序序列，因为满二叉树总是对半分的，具体操作：
//		1、找出先序序列的根节点，将其放入后序序列数组末尾；
//		2、将根节点之后的节点分成左右两堆，在分别执行上一步
//		3、直至全部处理完
//*/
//
//#include <stdio.h>
//
//void preToPost(char *arrPre,char *arrPost,int l1,int h1,int l2,int h2) {
//	//l1,h1,l2,h2代表arrPre和arrPost的起点和末尾
//	int half;
//	if (l1 <= h1) {
//		half = (h1 - l1) / 2;
//		*(arrPost + h2) = *(arrPre + l1);
//		preToPost(arrPre, arrPost, l1 + 1, l1 + half, l2, l2 + half - 1);//左边
//		preToPost(arrPre, arrPost, l1 + half + 1, h1, l2+ half, h2-1);//右边
//	}
//
//}
//int main() {
//	char arrPre[] = {'A','B','D','M','C','F','G'},arrPost[7];
//	preToPost(arrPre,arrPost,0,6,0,6);
//	for (int i = 0; i < 7;i++) {
//		printf("%c ",*(arrPost+i));
//	}
//	return 0;
//}
