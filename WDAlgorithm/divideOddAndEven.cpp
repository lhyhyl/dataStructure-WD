/*
	��һ����ͷ��㵥����A�ֽ��������ͷ���ĵ�����A��B��ʹ��A�к���ԭ�������Ϊ������Ԫ�أ�B��Ϊż�����ұ��������λ�ò���
	������
		����������Ҫ����һ���ڵ�ռ�ΪB��Ϊͷ�ڵ㣬Ȼ������һ��flag��Ϊ0ʱ��Ϊ������������A��Ϊ1ʱ��Ϊ��
		ż��������B
*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void divide(Link *lb,Link *la) {
//	int flag = 0;//����ż�ж�����Ϊ����֮��һ����ż����ż��֮��һ��������
//	struct Link *l=la, *p = la->next,*rb=lb,*ra=l;
//	l->next = NULL;//ԭ����ͷ����ÿ�
//	while (p) {//Ҫʹ��˳�򲻱䣬����β�巨
//		if (!flag) {
//			ra->next = p;
//			ra = p;
//			flag = 1;
//		}
//		else {
//			rb->next = p;
//			rb = p;
//			flag = 0;
//		}
//		p = p->next;
//	}
//	ra->next = NULL;//Ҫ�ǵý�ĩβ�ڵ��ָ��ָ��NULL����Ȼ����Ȼ��֮ǰ��ָ�룬���½������ȷ
//	rb->next = NULL;
//}
//int main() {
//	struct Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link *);
//	head = createLink(0);
//	Link *b = (Link*)malloc(sizeof(Link));//���ٽڵ�ռ�
//	divide(b,head);
//	printfNowLink(b);
//	printf("\n");
//	printfNowLink(head);
//	return 0;
//}