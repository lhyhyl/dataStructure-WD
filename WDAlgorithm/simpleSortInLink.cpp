///*
//	�������ڵ�������ʹ�ã�
//				������
//						��ʵԭ����ͬ��ֻ�ǵ������ʧȥ��������ʵ����ƣ�Ҫע���ֹ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//struct Link {
//	int data;
//	struct Link *next;
//};
//void simpleSort(Link *l) {//������ÿ��ѡ��һ����С������ǰ��
//	Link *p, *pre, *s, *r;
//	while (l->next) {
//		p = s = l->next, pre = r = l;
//		while (p) {
//			if (p->data < s->data) {
//				r = pre;
//				s = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		if (s == l->next) {
//			l = l->next;
//		}
//		else {
//			r->next = s->next;
//			s->next = l->next;
//			l->next = s;
//			l = s;
//
//		}
//	}
//}
//int main() {
//	struct Link *l;
//	Link* createLink(int);
//	l = createLink(0);
//	simpleSort(l);
//	while (l->next) {
//		printf("%d ", l->next->data);
//		l = l->next;
//	}
//	return 0;
//}