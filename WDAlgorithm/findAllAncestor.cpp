///*
//	�ڶ������в���ֵΪx�Ľڵ㣬�Ա�д�㷨��ӡֵΪx�Ľڵ���������ȣ�����x��ֵ������һ����
//	������
//		�������ǲ��ú���������ǵݹ飩����Ϊ����������x֮ǰ���ǻ���������Ƚڵ�ȫ����ջ���������ҵ�xʱ��������ȡ��ջ��Ԫ��
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
//	biTree *top(Stack *);//���ص���һ��ָ��
//	bool empty(Stack *);
//	while (p || !empty(s)) {
//		if (p) {//һ·������������ջ
//			push(s, p);
//			p = p->lchild;
//		}
//		else {//û�����ӣ�
//			p = top(s);
//			if (p->rchild && p != r) {//��������������������ջ
//				r = p;
//				p = p->rchild;
//			}
//			else {//����û������Ҳû���Һ���ʱ���ó�ջ��
//				pop(s);//������Ԫ���ȳ�ջ
//				if (p->data == x) {//�ҵ��ˣ���ô���ջ����Ԫ�أ���ȫ������������
//					printf("����Ԫ����:");
//					while (!empty(s)) {
//						tp = top(s);
//						printf("%c ", tp->data);
//						pop(s);
//					}
//
//				}
//				p = NULL;//һ��Ҫ��p�ÿգ���Ȼ�ֻ��p��������ջ
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
//	printf("������Ҫ���ҵ�Ԫ�أ�x=");
//	x = getchar();
//	findAllAncestor(T, s, x);
//	return 0;
//}