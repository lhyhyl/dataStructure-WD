///*
//	�������ڵ�������ʹ�ã�
//				������
//						��ʵԭ����ͬ��ֻ�ǵ������ʧȥ��������ʵ����ƣ�Ҫע���ֹ����
//*/
//#include <stdio.h>
//#include <stdlib.h>
//struct Link {
//	int data;
//	Link *next;
//};
//void simpleSort(Link *l) {//������ÿ��ѡ��һ����С������ǰ��
//	Link* p, * pre, * m, * preM;
//	while (l->next) {//������нڵ㣬��ô����δ���
//		p = m = l->next, pre = preM = l;//���׸�δ����ڵ㿪ʼѰ����Сֵ�ڵ�
//		while (p) {//Ѱ����Сֵ
//			if (p->data < m->data) {
//				preM = pre;
//				m = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		if (m == l->next) {//���mδ��˵����СֵԪ��������ȷλ��
//			l = l->next;
//		}
//		else {//�����ƶ�����СֵԪ�ص���ȷλ��
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