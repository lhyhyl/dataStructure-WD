///*
//	设有两个栈s1、s2都采用顺序栈方式，并共享一个存储区，大小为max，为了尽量利用空间，减少溢出的可能，
//	可采用栈顶相向、迎面增长的存储方式，试设计s1、s2有关入栈和出栈的算法。
//	分析：
//		
//*/
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#define TYPE char 
//struct Stack
//{
//	TYPE* arr;	//内存首地址
//	int top[2]; 	//栈的下标
//};
//
///* --------------以下为实现函数--------------------*/
////创建一个栈
//Stack *createStack(int size) {
//	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));//给栈分配空间
//	stack->arr = (TYPE *)malloc(sizeof(TYPE)*size);//给内存首地址分配空间，大小用户指定
//	stack->top[0] = -1;//栈顶下标，当前无元素，故为-1
//	stack->top[1] = size;//栈顶下标，当前无元素，故为-1
//	return stack;
//}
////判断栈满
//bool full(Stack *stack) {
//	return stack->top[1]-stack->top[0] == 1;
//}
////判断栈空
//bool empty(int i,Stack *stack,int size) {
//	switch (i) {
//	case 0:
//		return stack->top[0] == -1; 
//	case 1:
//			return stack->top[0] == size;
//
//	}
//}
////入栈(具体值)
//bool push(Stack *stack, TYPE data,int i) {
//	if (full(stack)) return false;
//	switch (i) {
//	case 0:
//		*(stack->arr + ++stack->top[i]) = data;
//	case 1:
//		*(stack->arr + --stack->top[i]) = data;
//	}
//	return true;
//}
//
////出栈
//bool pop(int i,Stack *stack,int size) {
//	if (empty(i,stack,size)) return false;
//	switch (i) {
//	case 0:
//		stack->top[i]--;
//	case 1:
//		stack->top[i]++;
//	}
//	return true;
//
//}
