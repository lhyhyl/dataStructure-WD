/*
	�赥����ı�ͷָ��Ϊh���ڵ�ṹ��data��next�����򹹳ɣ�����data��Ϊ�ַ��͡�
	������㷨�жϸ������ȫ��n���ַ��Ƿ������ĶԳƣ�����xyx��xyyx�������ĶԳơ�

	������
		���ǿ�������ջ���Ƚ�������������㶨����⣬����������������ָ�룬fast��slow
		֮ǰ���Ǿ��ù����ַ����������ҵ��м�ڵ㣬֮��slow�ڵ�֮��Ľڵ�������ջ��
		fastָ������ָ���׽ڵ㣬Ȼ��fast��ջ��Ԫ��һһ�Ƚϣ������ڲ�ͬ���򲻶Գơ�
*/
//struct Link {
//	union {
//		char letter;
//	}type;
//	Link *next;
//};
//struct Stack {
//	char *arr;
//	int len;
//	int top;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void isSymmetry(Link *h) {
//	int size;
//	struct Stack *s;
//	Stack *createStack(int);
//	bool push(Stack *,char);
//	bool empty(Stack *);
//	char *top(Stack *);
//	bool pop(Stack *);
//	void destory(Stack *);
//	printf("������Ҫ������ջ�Ĵ�С��size=");
//	scanf("%d",&size);
//	s = createStack(size);
//	Link *fast = h->next, *slow = h->next;
//	while (fast->next&&fast->next->next) {
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	fast = h->next;
//	while (slow->next) {//���м�Ԫ�صĺ���ڵ�������ջ
//		push(s,slow->next->type.letter);
//		slow = slow->next;//����������������
//	}
//	while (!empty(s)) {
//		if (fast->type.letter != *top(s) ) {
//			printf("����������ĶԳ�");
//			break;
//		}
//		fast = fast->next;
//		pop(s);
//	}
//	if(empty(s))printf("�����������ĶԳƵ�");
//	destory(s);//�������ջ
//}
//int main() {
//	Link *head;
//	Link *createLink(int);
//	head = createLink(1);
//	isSymmetry(head);
//	return 0;
//} 
//һ��ǫ���ѧ��