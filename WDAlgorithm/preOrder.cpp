///*
//	��д������������ǵݹ��㷨��
//	������
//		�����������ͬС�죬Ψһ�Ĳ������ÿ���ȷ��ʽڵ㣬���ж���û�����ӣ�������ջ��Ȼ���ջ�������ߡ�ֱ��ջ�ա�
//*/
//struct biTree {//���Ľṹ��
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Stack {//ջ�Ľṹ��
//	char* arr;	//�ڴ��׵�ַ
//	int  len;	//ջ������
//	int top; 	//ջ���±�
//};
//#include <stdio.h>
//#include <stdlib.h>
//void preOrder(biTree *T, Stack *s) {//�������
//	biTree *p = T;
//	bool empty(Stack *);
//	bool push(Stack *, biTree *);
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//һ·����
//			printf("%c ", p->data);//��ӡ��ǰԪ��
//			push(s, p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			pop(s);//ջ��Ԫ�س�ջ
//			p = p->rchild;//����Ѱ��
//		}
//	}
//}
//int main() {
//	int count = 0;
//	biTree *T = (biTree *)malloc(sizeof(biTree));
//	Stack *s = (Stack*)malloc(sizeof(Stack));
//	biTree *create(biTree*);
//	void nodeNum(biTree *, int *);
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T, &count);
//
//	s = createStack(count);//�����������ڵ������С��ջ
//
//	preOrder(T, s);
//	return 0;
//}
////һ��ǫ���ѧ��