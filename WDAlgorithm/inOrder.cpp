///*
//	是写出中序遍历的非递归算法
//	分析：
//		如果采用非递归，我们就需要用到栈这个数据结构了，具体流程为：从根节点一路往下找左孩子并将其入栈直至左孩子为空
//		然后依次出栈，并判断是否存在右孩子，如果有，右孩子入栈，继续往下找左孩子，如此重复直至栈空
//*/
//struct biTree {//树的结构体
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Stack {//栈的结构体
//	char* arr;	//内存首地址
//	int  len;	//栈的容量
//	int top; 	//栈的下标
//};
//#include <stdio.h>
//#include <stdlib.h>
//void inOrder(biTree *T,Stack *s) {//中序遍历
//	biTree *p = T;
//	bool empty(Stack *);
//	bool push(Stack *,biTree * );
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p||!empty(s)) {
//		if (p) {//一路向左
//			push(s,p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			printf("%c ",p->data);//打印栈顶元素
//			pop(s);//栈顶元素出栈
//			p = p->rchild;//向右寻找
//		}
//	}
//}
//int main() {
//	int count=0;//计数器，二叉树节点个数
//	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree));
//	struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
//	biTree *create(biTree*);
//	void nodeNum(biTree *,int *);
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T,&count);
//
//	s = createStack(count);//创建二叉树节点个数大小的栈
//
//	inOrder(T,s);
//	return 0;
//}