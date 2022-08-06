
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define TYPE int
//#define TYPE biTree*
//#define TYPE char
//#define TYPE Recursion
struct biTree {
	char data;
	biTree *lchild;
	biTree *rchild;
};
struct Recursion {
	int no;
	int val;
};
struct Stack
{
	TYPE *arr;	//�ڴ��׵�ַ
	int  len;	//ջ������
	int top; 	//ջ���±�
};

/* --------------����Ϊʵ�ֺ���--------------------*/
//����һ��ջ
Stack *createStack(int size) {
	Stack *stack = (Stack*)malloc(sizeof(Stack));//��ջ����ռ�
	stack->arr = (TYPE *)malloc(sizeof(TYPE)*size);//���ڴ��׵�ַ����ռ䣬��С�û�ָ��
	stack->len = size;//ջ����
	stack->top = -1;//ջ���±꣬��ǰ��Ԫ�أ���Ϊ-1
	return stack;
}
//�ж�ջ��
bool full(Stack *stack) {
	return stack->top + 1 >= stack->len;
}
//�ж�ջ��
bool empty(Stack *stack) {
	return stack->top == -1;
}
//��ջ
bool push(Stack *stack, TYPE p) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = p;
	return true;
}

//��ջ
bool pop(Stack *stack) {
	if (empty(stack)) return false;
	stack->top--;
	return true;

}

//�鿴ջ��Ԫ��
TYPE top(Stack *stack) {
	if (empty(stack)) return NULL;
	return *(stack->arr + stack->top);
}

//����
void destory(Stack *stack) {
	free(stack->arr);
	free(stack);

}
//�ж��Ƿ���ĳ��Ԫ��
bool contain(Stack *stack, TYPE r) {
	if (empty(stack)) return false;
	for (int i = stack->top; i >= 0; i--) {
		if (r == *(stack->arr + i) ){//���ˣ��Ҿ�Ȼ��==д����=
			return true;
		}
	}
	return false;
}
//��ӡջ��Ԫ��
void print(Stack *stack) {
	if (empty(stack)) return;
	for (int i = stack->top; i >= 0; i--) {
		printf("%c",stack->arr[i]);
	}
}


