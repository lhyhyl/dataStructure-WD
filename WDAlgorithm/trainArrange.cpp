///*
//	利用栈进行车厢调度，使软座全部位于硬座前面
//	分析：
//		原文题目较长，但仔细分析后，这道题是一类较为简单的题。这里其实也并不需要用到栈的先入后出的特性，仅仅需要将硬座
//		暂存，让软座先出去而已，所以将栈换成其他结构也是可以的，只要能够暂存数据。但这里题目要求用栈。
//		为了模拟列车座位，我们采用两个数组来存储，数组A为入口处火车，数组B为出口处火车，A内数据依次入栈，若为硬座则压入
//		栈，若为软座则直接进入B，最后栈内元素全部出栈，入B，至此，完成要求。
//*/
//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	char *arr;
//	int len;
//	int top;
//};
//void trainArrange(char *arrA,char *arrB,Stack *s) {//传入入口车厢，出口车厢，栈
//	int i = 0, j = 0;
//	char *c;//接收出栈硬座
//	bool push(Stack *,char );
//	char *top(Stack *);
//	bool pop(Stack *);
//	bool empty(Stack *);
//	while (i<10) {
//		if (arrA[i]=='H') {//硬座，入栈
//			push(s,arrA[i]);
//		}
//		else {//软座，入B
//			arrB[j++] = arrA[i];
//		}
//		i++;
//	}
//	while (!empty(s)) {//若栈中还有硬座，全部入B
//		c = top(s);
//		pop(s);
//		arrB[j++] = *c;
//	}
//
//}
//int main() {
//	char arrA[10] = {'H','S','S','H','H','S','S','S','H','H' };//用H代表硬座，S代表软座
//	char arrB[10] = { 0 };//B数组初始为空
//	Stack *createStack(int);
//	Stack *s;
//	s = createStack(10);//创建栈
//	trainArrange(arrA,arrB,s);
//	for (int i = 0; i < 10;i++) {//打印重排后的车厢
//		printf("%c",arrB[i]);
//
//	}
//	return 0;
//}