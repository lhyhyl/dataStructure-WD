/*
	��һ��������������Ա��У�����ֵ��ͬ��Ԫ�ش��ڣ����洢��ʽΪ����������㷨ȥ����ֵ��ͬ��Ԫ�أ�ʹ���в������ظ���Ԫ�ء�
	������
		��������ȥ�أ����ǿ϶���Ҫ���б����������������ǵ��ǵ�����������У����Ǳ���Խ���һһ�Ƚϣ���һ��Ԫ���뵱ǰԪ����ͬ
		ʱ��ɾ����ǰԪ��
*/
//struct Link {
//	int data;
//	Link *next;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//void deleteRep(Link *h) {
//	Link *pre = h, *p = h->next, *r;//ɾ���ڵ�ر�������
//	while (p->next) {
//		if (p->data==p->next->data) {//��ǰ�ڵ�������ڵ�ֵ��ͬ����ɾ�����ͷſռ�
//			r = p->next;//�����ȱ�������ڵ㣬��ֹ����
//			pre->next = p->next;
//			free(p);
//			p = r;
//			continue;
//		}
//		pre = p;
//		p = p->next;
//	}
//}
//int main() {
//	Link * head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	deleteRep(head);
//	printfNowLink(head);
//	return 0;
//}