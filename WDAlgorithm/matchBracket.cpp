///*
//	����һ���㷨���ʽ����Բ���š������š��ͻ�����3�����͵����ţ���дһ���㷨���жϱ��ʽ��������Ƿ���ԣ����ַ���\0����Ϊ
//	�������ʽ�Ľ�������
//	������
//		�������ö������洢�������ʽ��������һ��ջ�������ж�����������Ϊ�����δӶ�����ȡ�����ʽ�����������������ջ��
//		�������������ȡ��ջ��Ԫ�أ��ȶ��Ƿ���ԣ������ƥ�䣬��ֹ��ƥ���������
//*/
//struct LinkQueue {
//	Link *front, *rear;
//};
//struct Stack
//{
//	char* arr;	//�ڴ��׵�ַ
//	int  len;	//ջ������
//	int top; 	//ջ���±�
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//bool matchBracket(LinkQueue *lq, Stack *s) {
//	char letterQ, letterS;
//	bool isEmpty(LinkQueue *);
//	bool deQueue(LinkQueue *, char *);
//
//	bool push(Stack *, char);
//	char top(Stack *);
//	bool pop(Stack *);
//	bool empty(Stack *);
//	while (!isEmpty(lq)) {//������в���
//		deQueue(lq, &letterQ);//ȡ������Ԫ��
//		if (letterQ == '(' || letterQ == '{' || letterQ == '[') {//����������ţ���ջ
//			push(s, letterQ);
//		}
//		else {//����������ţ�ȡ��ջ��Ԫ�ضԱ�
//			if (empty(s)) {
//				return false;
//			}
//			letterS = top(s);
//			pop(s);
//			switch (letterQ) {
//			case ')': if (letterS != '(')return false; break;
//			case ']': if (letterS != '[' ) return false; break;
//			case '}': if (letterS != '{' ) return false; break;
//			default:break;
//			}
//		}
//	}
//	if (empty(s)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//int main() {
//	int n;//ջ�Ĵ�С
//	char letter;
//	struct LinkQueue *lq;
//	struct Stack *s;
//	LinkQueue *create();
//	bool enQueue(LinkQueue *, char);
//	void printQ(LinkQueue *);
//	Stack *createStack(int);
//	lq = create();
//	printf("������ջ�Ĵ�С��n=");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		scanf("\n%c", &letter);
//		enQueue(lq, letter);
//	}
//	printQ(lq);
//	printf("\n");
//	s = createStack(n);
//	if (matchBracket(lq, s)) {
//		printf("���������ʽ���");
//	}
//	else {
//		printf("���������ʽ�����");
//	}
//	return 0;
//}