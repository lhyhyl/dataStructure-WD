///*
//	已知一课二叉树按顺序存储结构进行存储，设计一个算法，求编号分别为i和j的两个节点的最近的公共祖先节点的值
//	分析：
//		利用数组存储一颗二叉树，一般来说我们用这种方式存储一颗完全二叉树，不浪费空间
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int findCommonAncestor(int *arr,int i,int j) {
//	while (i!=j) {
//		i > j ? i = i / 2: j = j / 2;
//	}
//	return *(arr + i);
//}
//int main() {
//	void createBiTree(int *,int);
//	int count,i,j;
//	printf("请输入所要创建的二叉树，其转换为完全二叉树的最少节点数：count=");
//	scanf("%d",&count);
//	int *arr = (int *)malloc(sizeof(int)*(count + 2));//下标为0我们不存
//	createBiTree(arr,count);
//	printf("请输入要查找公共节点的两个节点的编号,编号<=%d:\n",count);
//	printf("i=");
//	scanf("%d",&i);
//	printf("\n");
//	printf("j=");
//	scanf("%d", &j);
//	while (i>count || j>count || *(arr+i)==9999||*(arr+j)==9999 ){
//		printf("编号有误，请重新输入：\n");
//		printf("i=");
//		scanf("%d", &i);
//		printf("\n");
//		printf("j=");
//		scanf("%d", &j);
//	}
//	count = findCommonAncestor(arr,i,j);
//	printf("公共祖先的值为:%d",count);
//	return 0;
//}