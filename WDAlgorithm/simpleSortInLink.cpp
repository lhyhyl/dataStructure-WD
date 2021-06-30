///*
//	简单排序在单链表中使用：
//				分析：
//						其实原理相同，只是单链表就失去了随机访问的优势，要注意防止断链
//*/
//#include <stdio.h>
//#include <stdlib.h>
//struct Link {
//	int data;
//	struct Link *next;
//};
//void simpleSort(Link *l) {//简单排序，每次选择一个最小的排在前面
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