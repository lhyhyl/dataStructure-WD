/*
	采用顺序存储保存一个二叉树，我们要将一个普通的树转换成一颗完全二叉树，将不存在的节点用9999代替
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void createBiTree(int *arr,int count) {
	int i = 1,data;
	//int *arr = (int *)malloc(sizeof(int)*(count+2));//下标为0我们不存，最后要有结束标识符
	while (count--) {
		printf("请输入第%d个节点:",i);
		scanf("%d",&data);
		*(arr + i) = data;
		i++;
	}
}
