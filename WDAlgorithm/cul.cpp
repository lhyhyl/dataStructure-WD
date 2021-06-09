///*
//	利用一个栈实现以下递归函数的非递归计算
//	分析：
//		这里我们需要使用栈的先进后出特性。我们可以看出，从n=2开始，每一个值便都与前两个值挂钩，且式子不变，我们
//		可以从栈顶到栈底依次边出栈边计算，直至栈底，便可以得出最终结果。
//		
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct Recursion {
//	int no;
//	int val;
//};
//struct Stack {
//	Recursion *arr;
//	int len;
//	int top;
//};
//int getP(Stack *s,int n,int x) {//该算法函数,传入栈，n和x
//	if (n==0) {
//		return 1;
//	}
//	int fv1 = 1, fv2 = 2 * x;
//	for (int i = n; i >= 2;i--) {//将序号入栈，从上至下，从2到n
//		s->top++;
//		s->arr[s->top].no = i;
//	}
//	while (s->top>=0) {//边出栈边计算
//		s->arr[s->top].val = 2 * x*fv2 - 2 * (s->arr[s->top].no - 1)*fv1;
//		fv1 = fv2;
//		fv2 = s->arr[s->top].val;
//		s->top--;
//	}
//	return fv2;
//}
//int main() {
//	Stack *s;
//	//声明各类方法
//	Stack *createStack(int);
//	bool pushS(Stack *,Recursion *);
//	bool full(Stack *);
//	bool empty(Stack *);
//	bool top(Stack *);
//	bool pop(Stack *);
//
//	int n, x;//题目所要用到的n和x
//	int p;//用于接收结果
//	printf("请输入n和x: \n");
//	printf("n=");
//	scanf("%d",&n);
//	printf("x=");
//	scanf("%d", &x);
//
//	//创建大小为n的栈
//	s = createStack(n);
//	p=getP(s,n,x);
//	printf("%d",p);
//	return 0;
//}