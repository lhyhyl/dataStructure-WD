/*
		��A��B��������������ͷ��㣩������Ԫ�ص����������һ���㷨��A��B�еĹ���Ԫ�ز���������C��Ҫ���ƻ�A��B�ڵ�
		������
			Ҫ���ƻ�A��B�ڵ㣬��������Ҫ���´�������ڵ�ռ䣬���������ӡ�ΪѰ�ҹ���Ԫ�أ�ÿ����A�е�һ��Ԫ�أ���ȥ
			��B��Ԫ��һһ�Ƚϣ�ͬ��ȡֵ����һ�ռ�ڵ㣬���ӵ�C�ϡ�ʱ�临�Ӷ�ΪO(n^2)��
			��Ϊ�����������ǵ�������ģ���ô���ǿ�����������ָ��ͬ���Ƚϣ���ͬ�����c����ͬС���Ǹ������ƣ�ֱ��������ĩβ
			������ʱ�临�Ӷ�ΪO(n).
*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void linkCommon(Link *a, Link *b, Link *c ) {
//	struct Link *lc = c,*la=a->next,*lb=b->next,*rc=lc;
//	while (la) {
//		while (lb) {
//			if (la->data==lb->data) {//����ǹ���Ԫ��
//				struct Link *p = (struct Link*)malloc(sizeof(struct Link));
//				p->data = la->data;
//				rc->next = p;//����β�巨
//				rc = p;
//				break;
//			}
//			lb = lb->next;
//		}
//		la = la->next;
//		lb = b->next;
//	}
//	rc->next = NULL;//���һ���ڵ�ָ����Ҫָ��NULL��
//}
//void listCommon(Link *a,Link *b,Link *c) {
//	struct Link *rc = c, *la = a->next, *lb = b->next;
//	while (la&&lb) {
//		if (la->data==lb->data) {
//			struct Link *p = (struct Link*)malloc(sizeof(struct Link));
//			p->data = la->data;
//			p->next = NULL;
//			rc->next = p;
//			rc = p;
//			la = la->next;
//			lb = lb->next;
//		}
//		else {
//			la->data < lb->data ? la = la->next : lb = lb->next;
//		}
//	}
//	rc->next = NULL;
//}
//int main() {
//	struct Link *a, *b;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	a = createLink(0);
//	b = createLink(0);
//	struct Link *c = (struct Link*)malloc(sizeof(struct Link));
//	c->next = NULL;
//	//linkCommon(a,b,c);
//	listCommon(a,b,c);
//	printfNowLink(c);
//	return 0;
//}