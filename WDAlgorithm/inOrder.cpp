///*
//	��д����������ķǵݹ��㷨
//	������
//		������÷ǵݹ飬���Ǿ���Ҫ�õ�ջ������ݽṹ�ˣ���������Ϊ���Ӹ��ڵ�һ·���������Ӳ�������ջֱ������Ϊ��
//		Ȼ�����γ�ջ�����ж��Ƿ�����Һ��ӣ�����У��Һ�����ջ���������������ӣ�����ظ�ֱ��ջ��
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
//void inOrder(biTree *T,Stack *s) {//�������
//	biTree *p = T;
//	bool empty(Stack *);
//	bool push(Stack *,biTree * );
//	biTree *top(Stack *);
//	bool pop(Stack *);
//	while (p||!empty(s)) {
//		if (p) {//һ·����
//			push(s,p);
//			p = p->lchild;
//		}
//		else {
//			p = top(s);
//			printf("%c ",p->data);//��ӡջ��Ԫ��
//			pop(s);//ջ��Ԫ�س�ջ
//			p = p->rchild;//����Ѱ��
//		}
//	}
//}
//int main() {
//	int count=0;//���������������ڵ����
//	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree));
//	struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
//	biTree *create(biTree*);
//	void nodeNum(biTree *,int *);
//	Stack *createStack(int);
//
//	T = create(T);
//	nodeNum(T,&count);
//
//	s = createStack(count);//�����������ڵ������С��ջ
//
//	inOrder(T,s);
//	return 0;
//}