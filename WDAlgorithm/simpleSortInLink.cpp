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
//	Link *p, *pre, *m, *preM;
//	while (l->next) {
//		p = m = l->next, pre = preM = l;
//		while (p) {
//			if (p->data < m->data) {
//				preM = pre;
//				m = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		if (m == l->next) {
//			l = l->next;
//		}
//		else {
//			preM->next = m->next;
//			m->next = l->next;
//			l->next = m;
//			l = m;
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