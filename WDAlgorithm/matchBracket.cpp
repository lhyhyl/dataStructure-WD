///*
//	假设一个算法表达式包含圆括号、方括号、和花括号3种类型的括号，编写一个算法来判断表达式里的括号是否配对，以字符‘\0’作为
//	算术表达式的结束符。
//	分析：
//		我们利用队列来存储算术表达式，再利用一个栈来进行判定，具体流程为：依次从队列中取出表达式，如果是左括号则入栈，
//		如果是右括号则取出栈顶元素，比对是否配对，如果不匹配，终止，匹配则继续。
//*/
//struct LinkQueue {
//	Link *front, *rear;
//};
//struct Stack
//{
//	char* arr;	//内存首地址
//	int  len;	//栈的容量
//	int top; 	//栈的下标
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//bool matchBracket(LinkQueue *lq, Stack *s) {
//	char letterQ, letterS;
//	bool isEmpty(LinkQueue *);
//	bool deQueue(LinkQueue *, char *);
//
//	bool push(Stack *, char);
//	char top(Stack *);
//	bool pop(Stack *);
//	bool empty(Stack *);
//	while (!isEmpty(lq)) {//如果队列不空
//		deQueue(lq, &letterQ);//取出队首元素
//		if (letterQ == '(' || letterQ == '{' || letterQ == '[') {//如果是左括号，入栈
//			push(s, letterQ);
//		}
//		else {//如果是右括号，取出栈顶元素对比
//			if (empty(s)) {
//				return false;
//			}
//			letterS = top(s);
//			pop(s);
//			switch (letterQ) {
//			case ')': if (letterS != '(')return false; break;
//			case ']': if (letterS != '[' ) return false; break;
//			case '}': if (letterS != '{' ) return false; break;
//			default:break;
//			}
//		}
//	}
//	if (empty(s)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//	int n;//栈的大小
//	char letter;
//	struct LinkQueue *lq;
//	struct Stack *s;
//	LinkQueue *create();
//	bool enQueue(LinkQueue *, char);
//	void printQ(LinkQueue *);
//	Stack *createStack(int);
//	lq = create();
//	printf("请输入栈的大小：n=");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("\n%c", &letter);
//		enQueue(lq, letter);
//	}
//	printQ(lq);
//	printf("\n");
//	s = createStack(n);
//	if (matchBracket(lq, s)) {
//		printf("该算术表达式配对");
//	}
//	else {
//		printf("该算术表达式不配对");
//	}
//	return 0;
//}