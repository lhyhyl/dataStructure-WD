///*
//	����һ��ջʵ�����µݹ麯���ķǵݹ����
//	������
//		����������Ҫʹ��ջ���Ƚ�������ԡ����ǿ��Կ�������n=2��ʼ��ÿһ��ֵ�㶼��ǰ����ֵ�ҹ�����ʽ�Ӳ��䣬����
//		���Դ�ջ����ջ�����α߳�ջ�߼��㣬ֱ��ջ�ף�����Եó����ս����
//		
//*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//struct Recursion {
//	int no;
//	int val;
//};
//struct Stack {
//	Recursion *arr;
//	int len;
//	int top;
//};
//int getP(Stack *s,int n,int x) {//���㷨����,����ջ��n��x
//	if (n==0) {
//		return 1;
//	}
//	int fv1 = 1, fv2 = 2 * x;
//	for (int i = n; i >= 2;i--) {//�������ջ���������£���2��n
//		s->top++;
//		s->arr[s->top].no = i;
//	}
//	while (s->top>=0) {//�߳�ջ�߼���
//		s->arr[s->top].val = 2 * x*fv2 - 2 * (s->arr[s->top].no - 1)*fv1;
//		fv1 = fv2;
//		fv2 = s->arr[s->top].val;
//		s->top--;
//	}
//	return fv2;
//}
//int main() {
//	Stack *s;
//	//�������෽��
//	Stack *createStack(int);
//	bool push(Stack *,Recursion *);
//	bool full(Stack *);
//	bool empty(Stack *);
//	bool top(Stack *);
//	bool pop(Stack *);
//
//	int n, x;//��Ŀ��Ҫ�õ���n��x
//	int p;//���ڽ��ս��
//	printf("������n��x: \n");
//	printf("n=");
//	scanf("%d",&n);
//	printf("x=");
//	scanf("%d", &x);
//
//	//������СΪn��ջ
//	s = createStack(n);
//	p=getP(s,n,x);
//	printf("%d",p);
//	return 0;
//}