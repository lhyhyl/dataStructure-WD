///*
//	�����Ա�L=��a1,a2,a3,...,an-2,an-1,an��,���ô�ͷ���ĵ������棬���һ���ռ临�Ӷ�ΪO(1)��
//	�㷨���õ�L'=��a1,an,a2,an-1,a3,an-2...��
//	������
//		����⻹����һ�㸴�ӵģ������������������������ǿ���������������������������ָ��slow��fast������fastÿ����������
//		slowÿ����һ������fast������βʱ��slow�պô��������м�ڵ㣬֮ǰ����ѧ���������ã����������ǰ�slow����Ľڵ����ã�
//		����ͱ���ˣ�a1,a2,a3,...,an,an-1,an-2,...��,Ȼ�����Ǵ��м俪ʼ���������ν��ڵ���뵽ǰ��ڵ���棬�������Ҫ��
//*/
//struct Link {
//	union {
//		int data;
//	}type;
//	struct Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void crossTheLink(Link *h) {
//	void reverse(Link *);
//	struct Link *fast = h->next, *slow = h->next,*mid;
//	mid = (Link*)malloc(sizeof(Link));
//	while (fast->next&&fast->next->next) {//Ѱ���м�ڵ�
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	mid->next = slow->next;
//	reverse(mid);//��תmid����Ľڵ�
//	//slow->next = mid->next;
//	fast = h->next;
//	slow->next = NULL;
//	slow = mid->next;
//	while (slow) {//������в���
//		mid = slow->next;
//		slow->next = fast->next;
//		fast->next = slow;
//		slow = mid;
//		fast = fast->next->next;//��Ϊ��slow�����ˣ�����֮ǰ��fast��һ�������ڵ�������
//	}
//}
//void reverse(Link *h) {//ͷ�巨����
//	struct Link *p = h->next,*r;
//	h->next = NULL;
//	while (p) {
//		r = p->next;
//		p->next = h->next;
//		h->next = p;
//		p = r;
//	}
//	
//}
//int main() {
//	struct Link *head,*p;
//	Link *createLink(int);
//	head = createLink(0);
//	crossTheLink(head);
//	printf("����������Ϊ��");
//	p = head->next;
//	while (p) {
//		printf("%d ", p->type.data);
//		p = p->next;
//	}
//	return 0;
//}