///*
//	有一个队列和一个栈，设计一个算法是队列中的元素逆置。
//	分析：
//		我们可以一次取出队列中的元素放到栈中，然后在依次取出入队。
//*/
//struct Stack
//{
//	int* arr;	//内存首地址
//	int  len;	//栈的容量
//	int top; 	//栈的下标
//};
//struct Squeue {//这里我采用的是循环队列，也可以不用循环队列
//	int *arr;
//	int front, rear;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	struct Squeue *sq;
//	struct Stack *s;
//	int n,data;
//	Squeue *createQueue(int );
//	bool enQueue(Squeue *,int,int);
//	bool deQueue(Squeue *,int *,int);
//	void printQ(Squeue *, int );
//	Stack *createStack(int );
//	bool push(Stack *,int );
//	bool pop(Stack *);
//	int *top(Stack *);
//
//	printf("请输入队列及栈大小:");
//	scanf("%d",&n);
//	sq = createQueue(n+1);//因为是循环队列，需要留一个空间作为满空判定
//	s = createStack(n);
//	for (int i = 0; i < n;i++) {
//		printf("请输入第%d个入队元素：",i+1);
//		scanf("%d",&data);
//		enQueue(sq,data, n + 1);//入队
//	}
//	printf("原队列中元素为：");
//	printQ(sq,n+1);
//	printf("\n");
//	for (int i = 0; i < n;i++) {
//		deQueue(sq,&data, n + 1);//出队
//		push(s,data);//入栈
//	}
//	for (int i = 0; i < n; i++) {
//		data = *top(s);
//		pop(s);//出栈
//		enQueue(sq,data, n + 1);//入队
//	}
//	printf("逆转后队列中元素为：");
//	printQ(sq, n + 1);
//
//
//}