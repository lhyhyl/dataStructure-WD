/*
	p��q�ֱ�Ϊָ��ö����������������ڵ��ָ�룬�Ա�д�㷨ancestor(root,p,q,r),�ҵ�p��q������������Ƚڵ�r
	������
		��һ������ʵ���Ը�����һЩ��ʾ���������ǿ��Խ�����ڵ�����ȴ�����������������Ҳ����������ջ���ֱ�p��q
		�����ȴ���ջ�У���Ϊջ������������Ƚڵ㣬�������ǿ���һ������Ѱ����ͬ�ڵ㣬��һ���ҵ�����ͬ�ڵ�����������
		���Ƚڵ㡣
*/
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
//void findAncestor(Stack *s, biTree *m, biTree *x) {
//	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
//	bool empty(Stack *);
//	bool pushS(Stack *, biTree*);
//	bool pop(Stack *);
//	biTree *top(Stack *);//���ص���һ��ָ��
//	while (m || !empty(s)) {
//		if (m) {//һ·������������ջ
//			pushS(s, m);
//			m = m->lchild;
//		}
//		else {//û�����ӣ�
//			m = top(s);
//			if (m->rchild && m != r) {//��������������������ջ
//				r = m;
//				m = m->rchild;
//			}
//			else {//����û������Ҳû���Һ���ʱ���ó�ջ��
//				pop(s);//������Ԫ���ȳ�ջ
//				if (m->data == x->data) {//�ҵ��ˣ���ô���ջ����Ԫ�أ���ȫ������������
//					break;
//				}
//				m = NULL;//һ��Ҫ��p�ÿգ���Ȼ�ֻ��m��������ջ
//			}
//		}
//	}
//}
//void findNearestAncestor(biTree *T, biTree *p, biTree *q, biTree **r) {
//	int count = 0;
//	struct biTree *m = T;//����ָ��m��ָ����ڵ�
//	void nodeNum(biTree *, int *);
//	nodeNum(T, &count);//ͳ�ƽڵ����
//	struct Stack *sp, *sq;
//	Stack *createStack(int);
//	sp = createStack(count);
//	sq = createStack(count);
//
//	findAncestor(sp, m, p);//Ѱ��p�ڵ������
//	findAncestor(sq, m, q);//Ѱ��q�ڵ������
//
//	//��������Ĳ�����ջsp��sq�����Ѿ������p��q���Ե����ȣ�����������Ѱ���������
//	bool contain(Stack *,biTree *);
//	bool empty(Stack *);
//	bool pushS(Stack *, biTree*);
//	bool pop(Stack *);
//	biTree *top(Stack *);//���ص���һ��ָ��
//	while (!empty(sp)) {//��sp����
//		*r = top(sp);
//		if (contain(sq,*r)) {//�ж�sq��֪�����d
//			break;
//		}
//		pop(sp);
//	}
//}
//int main() {
//	int count = 0;
//	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree)), *p, *q;
//	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//
//	T = create(T);
//	p = T->lchild->lchild->rchild;//�ֶ�ָ��һ���ڵ㣬�мǲ�Ҫָ��NULL��
//	q = T->rchild->rchild;
//	//p = T->lchild;
//	//q = T->rchild;
//	findNearestAncestor(T, p, q, &r);//�ǵ�����Ҫ��r�ĵ�ַ����ȥ�����ܽ��иı�
//	printf("p q����������ΪֵΪ��%c",r->data);
//	return 0;
//}