
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
	TYPE* arr;	//�ڴ��׵�ַ
	int  len;	//ջ������
	int top; 	//ջ���±�
};

/* --------------����Ϊʵ�ֺ���--------------------*/
//����һ��ջ
Stack *createStack(int size) {
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));//��ջ����ռ�
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
//��ջ(����ֵ)
bool push(Stack *stack, TYPE data) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = data;
	return true;
}
//��ջ�����ṹ��
bool pushS(Stack *stack, biTree* p) {
	if (full(stack)) return false;
	*(stack->arr + ++stack->top) = p;
	return true;
}
//��ջ���ݹ�ṹ��
//bool pushS(Stack *stack, Recursion* p) {
//	if (full(stack)) return false;
//	(stack->arr + ++stack->top)->no = p->no;
//	(stack->arr + stack->top)->val = p->val;
//
//	return true;
//}
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
//bool contain(Stack *stack, biTree *r) {
//	if (empty(stack)) return false;
//	for (int i = stack->top; i >= 0; i--) {
//		if (r->data == (stack->arr + i)->data) {//���ˣ��Ҿ�Ȼ��==д����=
//			return true;
//		}
//	}
//	return false;
//}


