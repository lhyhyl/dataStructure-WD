/*
	���һ���㷨�ж�һ�������Ƿ��л�
	���������ǿ�������һ�£���һ���л��������ϣ����������ܲ���һ�����ܵÿ죬һ�����ܵ��������룬ʱ����������£��ܵÿ�
	���Ǹ����ǲ��ǻ��ٴ������ܵ��������أ����Զ�������⣬����Ҳ����ͨ������ָ��������pָ��һ���ƶ������ڵ㣬qָ��һ���ƶ�
	һ���ڵ㣬��������ٴ������ˣ�˵�������л������pָ��ΪNULL�ˣ�˵���޻���ͬʱ������Ҫ��¼p��q���ߵĲ���������ȷ��
	������ڵ�
*/
struct Link {
	union {
		int data;
	}type;
	struct Link *next;
};
#include <stdio.h>
Link *isLoop(Link *h) {
	struct Link *fast = h, *slow = h;
	while (slow&&fast&&fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) {//�ٴ�������˵���л�
			break;
		}
	}
	if (slow==NULL||fast==NULL||fast->next==NULL) {
		return NULL;
	}
	fast = h;
	while (fast != slow) {
		fast = fast->next;
		slow = slow->next;
	}
	return fast;
}
//int main() {
//	struct Link *head,*l,*s;
//	int count = 0;
//	Link *createLink(int);
//	head = createLink(0);
//	l = head;
//	while (l->next) {
//		l = l->next;
//	}
//	l->next = head->next->next->next;//�ֶ�����һ����
//	s=isLoop(head);
//	if (s) {
//		printf("������ʼ�ڵ�ֵΪ��%d",s->type.data);
//	}
//	else {
//		printf("�������޻�");
//	}
//	return 0;
//}