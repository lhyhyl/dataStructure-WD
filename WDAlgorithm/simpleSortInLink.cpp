///*
//	简单排序在单链表中使用：
//				分析：
//						其实原理相同，只是单链表就失去了随机访问的优势，要注意防止断链
//*/
//#include <stdio.h>
//#include <stdlib.h>
//struct Link {
//	int data;
//	Link *next;
//};
//void simpleSort(Link *l) {//简单排序，每次选择一个最小的排在前面
//	Link* p, * pre, * m, * preM;
//	while (l->next) {//如果还有节点，那么排序未完成
//		p = m = l->next, pre = preM = l;//从首个未排序节点开始寻找最小值节点
//		while (p) {//寻找最小值
//			if (p->data < m->data) {
//				preM = pre;
//				m = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		if (m == l->next) {//如果m未变说明最小值元素已在正确位置
//			l = l->next;
//		}
//		else {//否则，移动该最小值元素到正确位置
//			preM->next = m->next;
//			m->next = l->next;
//			l->next = m;
//			l = m;
//
//		}
//	}
//}
//int main() {
//	Link *l;
//	Link* createLink(int);
//	l = createLink(0);
//	simpleSort(l);
//	while (l->next) {
//		printf("%d ", l->next->data);
//		l = l->next;
//	}
//	return 0;
//}