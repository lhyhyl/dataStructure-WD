///*
//	��������ջs1��s2������˳��ջ��ʽ��������һ���洢������СΪmax��Ϊ�˾������ÿռ䣬��������Ŀ��ܣ�
//	�ɲ���ջ������ӭ�������Ĵ洢��ʽ�������s1��s2�й���ջ�ͳ�ջ���㷨��
//	������
//		
//*/
//#include<stdio.h>
//#include<stdbool.h>
//#include<stdlib.h>
//#define TYPE char 
//struct Stack
//{
//	TYPE* arr;	//�ڴ��׵�ַ
//	int top[2]; 	//ջ���±�
//};
//
///* --------------����Ϊʵ�ֺ���--------------------*/
////����һ��ջ
//Stack *createStack(int size) {
//	Stack *stack = (Stack*)malloc(sizeof(Stack));//��ջ����ռ�
//	stack->arr = (TYPE *)malloc(sizeof(TYPE)*size);//���ڴ��׵�ַ����ռ䣬��С�û�ָ��
//	stack->top[0] = -1;//ջ���±꣬��ǰ��Ԫ�أ���Ϊ-1
//	stack->top[1] = size;//ջ���±꣬��ǰ��Ԫ�أ���Ϊ-1
//	return stack;
//}
////�ж�ջ��
//bool full(Stack *stack) {
//	return stack->top[1]-stack->top[0] == 1;
//}
////�ж�ջ��
//bool empty(int i,Stack *stack,int size) {
//	switch (i) {
//	case 0:
//		return stack->top[0] == -1; 
//	case 1:
//			return stack->top[0] == size;
//
//	}
//}
////��ջ(����ֵ)
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
////��ջ
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
