/*
	��һ����ͷ���ĵ�����L�����һ���㷨ʹ���������
	������
		���ǿ��Բ���ð��������������ʹ���������,ʱ�临�Ӷ�ΪO(n^2)��
*/

//struct Link {
//	int data;
//	Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void bubbleSort(Link *h) {//ð������
//	int flag = 0;//�����־���������䶯����Ϊ1
//	int count = 0;//��¼������
//	Link *pre=h, *p = h->next,*r;
//	while (p) {
//		count++;
//		p = p->next;
//	}
//	p = h->next;
//	for (int i = 0; i < count;i++) {
//		flag = 0;
//		while (p->next) {//��ʼ��i+1��ð��
//			if (p->data > p->next->data) {//ǰ�ߴ��ں��ߣ�����Ҫ����
//				r = p->next->next;//rָ����һ���ڵ㣬��ֹ����
//				pre->next = p->next;
//				p->next->next = p;
//				pre = p->next;
//				p->next = r;
//				flag = 1;//�иĶ���flag��Ϊ1
//			}
//			else {
//				pre = p;
//				p = p->next;
//			}
//		}
//		if (!flag) break;//��ĳһ������δ���任�����϶��Ѿ��ź����˳�ѭ��
//		pre = h;//���´�ͷ��ʼ����
//		p = h->next;
//	}
//}
//int main() {
//	Link* createLink(int);
//	Link *head;
//	head = createLink(0);
//	bubbleSort(head);
//	printf("���������ֵΪ��");
//	while (head->next) {
//		printf("%d ", head->next->data);
//		head = head->next;
//	}
//	return 0;
//}
