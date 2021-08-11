///*
//	在二叉树中查找值为x的节点，试编写算法打印值为x的节点的所有祖先，假设x的值不多于一个。
//	分析：
//		这里我们采用后序遍历（非递归），因为在我们遇到x之前我们会把它的祖先节点全部入栈，当我们找到x时，再依次取出栈中元素
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void findAllAncestor(biTree *T, Stack *s, char x) {
//	struct biTree *p = T;
//	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
//	struct biTree *tp = (struct biTree *)malloc(sizeof(struct biTree));
//
//	bool push(Stack *, biTree*);
//	bool pop(Stack *);
//	biTree *top(Stack *);//返回得是一个指针
//	bool empty(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//一路将所有左孩子入栈
//			push(s, p);
//			p = p->lchild;
//		}
//		else {//没有左孩子，
//			p = top(s);
//			if (p->rchild && p != r) {//将右子树的所有左孩子入栈
//				r = p;
//				p = p->rchild;
//			}
//			else {//当既没有左孩子也没有右孩子时，该出栈了
//				pop(s);//被查找元素先出栈
//				if (p->data == x) {//找到了，那么如果栈中有元素，那全都是它的祖先
//					printf("祖先元素有:");
//					while (!empty(s)) {
//						tp = top(s);
//						printf("%c ", tp->data);
//						pop(s);
//					}
//
//				}
//				p = NULL;//一定要将p置空，不然又会把p的左孩子入栈
//			}
//		}
//
//
//	}
//}
//int main() {
//	int count = 0, x;
//	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree));
//	struct Stack *s;
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *, int *);
//
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//	s = createStack(count);
//	printf("请输入要查找的元素：x=");
//	x = getchar();
//	findAllAncestor(T, s, x);
//	return 0;
//}