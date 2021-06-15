
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define TYPE biTree*
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
	TYPE* arr;	//内存首地址
	int  len;	//栈的容量
	int top; 	//栈的下标
};

/* --------------以下为实现函数--------------------*/
//创建一个栈
Stack *createStack(int size) {
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));//给栈分配空间
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
//入栈(具体值)
bool push(Stack *stack, TYPE data) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = data;
	return true;
}
//入栈（树结构）
bool pushS(Stack *stack, biTree* p) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = p;
	return true;
}
//入栈（递归结构）
//bool pushS(Stack *stack, Recursion* p) {
//	if (full(stack)) return false;
//	(stack->arr + ++stack->top)->no = p->no;
//	(stack->arr + stack->top)->val = p->val;
//
//	return true;
//}
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
//bool contain(Stack *stack, biTree *r) {
//	if (empty(stack)) return false;
//	for (int i = stack->top; i >= 0; i--) {
//		if (r->data == (stack->arr + i)->data) {//疯了，我居然把==写成了=
//			return true;
//		}
//	}
//	return false;
//}


