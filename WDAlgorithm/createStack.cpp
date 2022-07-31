
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//#define TYPE int
#define TYPE biTree*
//#define TYPE char
//#define TYPE Recursion
struct biTree {
	char data;
	struct biTree *lchild;
	struct biTree *rchild;
};
struct Recursion {
	int no;
	int val;
};
struct Stack
{
	TYPE *arr;	//内存首地址
	int  len;	//栈的容量
	int top; 	//栈的下标
};

/* --------------以下为实现函数--------------------*/
//创建一个栈
Stack *createStack(int size) {
	Stack *stack = (Stack*)malloc(sizeof(Stack));//给栈分配空间
	stack->arr = (TYPE *)malloc(sizeof(TYPE)*size);//给内存首地址分配空间，大小用户指定
	stack->len = size;//栈容量
	stack->top = -1;//栈顶下标，当前无元素，故为-1
	return stack;
}
//判断栈满
bool full(Stack *stack) {
	return stack->top + 1 >= stack->len;
}
//判断栈空
bool empty(Stack *stack) {
	return stack->top == -1;
}
//入栈
bool push(Stack *stack, TYPE p) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = p;
	return true;
}

//出栈
bool pop(Stack *stack) {
	if (empty(stack)) return false;
	stack->top--;
	return true;

}

//查看栈顶元素
TYPE top(Stack *stack) {
	if (empty(stack)) return NULL;
	return *(stack->arr + stack->top);
}

//销毁
void destory(Stack *stack) {
	free(stack->arr);
	free(stack);

}
//判断是否含有某个元素
bool contain(Stack *stack, TYPE r) {
	if (empty(stack)) return false;
	for (int i = stack->top; i >= 0; i--) {
		if (r == *(stack->arr + i) ){//疯了，我居然把==写成了=
			return true;
		}
	}
	return false;
}
//打印栈中元素
void print(Stack *stack) {
	if (empty(stack)) return;
	for (int i = stack->top; i >= 0; i--) {
		printf("%c",stack->arr[i]);
	}
}


