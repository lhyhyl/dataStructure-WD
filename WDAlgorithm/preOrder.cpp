///*
//	试写出先序遍历（非递归算法）
//	分析：
//		和中序遍历大同小异，唯一的差别在于每次先访问节点，在判断有没有左孩子，有则入栈，然后出栈，往右走。直至栈空。
//*/
//struct biTree {//树的结构体
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//struct Stack {//栈的结构体
//	char* arr;	//内存首地址
//	int  len;	//栈的容量
//	int top; 	//栈的下标
//};
//#include <stdio.h>
//#include <stdlib.h>
//void preOrder(biTree *T, Stack *s) {//先序遍历
//	biTree *p = T;
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//一路向左
//			printf("%c ", p->data);//打印当前元素
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			pop(s);//栈顶元素出栈
//			p = p->rchild;//向右寻找
//		}
//	}
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	biTree *create(biTree*);
//	void nodeNum(biTree *, int *);
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//
//	s = createStack(count);//创建二叉树节点个数大小的栈
//
//	preOrder(T, s);
//	return 0;
//}
////一名谦虚的学生