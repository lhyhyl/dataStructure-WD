///*
//	��һ�����к�һ��ջ�����һ���㷨�Ƕ����е�Ԫ�����á�
//	������
//		���ǿ���һ��ȡ�������е�Ԫ�طŵ�ջ�У�Ȼ��������ȡ����ӡ�
//*/
//struct Stack
//{
//	int* arr;	//�ڴ��׵�ַ
//	int  len;	//ջ������
//	int top; 	//ջ���±�
//};
//struct Squeue {//�����Ҳ��õ���ѭ�����У�Ҳ���Բ���ѭ������
//	int *arr;
//	int front, rear;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//	struct Squeue *sq;
//	struct Stack *s;
//	int n,data;
//	Squeue *createQueue(int );
//	bool enQueue(Squeue *,int,int);
//	bool deQueue(Squeue *,int *,int);
//	void printQ(Squeue *, int );
//	Stack *createStack(int );
//	bool push(Stack *,int );
//	bool pop(Stack *);
//	int *top(Stack *);
//
//	printf("��������м�ջ��С:");
//	scanf("%d",&n);
//	sq = createQueue(n+1);//��Ϊ��ѭ�����У���Ҫ��һ���ռ���Ϊ�����ж�
//	s = createStack(n);
//	for (int i = 0; i < n;i++) {
//		printf("�������%d�����Ԫ�أ�",i+1);
//		scanf("%d",&data);
//		enQueue(sq,data, n + 1);//���
//	}
//	printf("ԭ������Ԫ��Ϊ��");
//	printQ(sq,n+1);
//	printf("\n");
//	for (int i = 0; i < n;i++) {
//		deQueue(sq,&data, n + 1);//����
//		push(s,data);//��ջ
//	}
//	for (int i = 0; i < n; i++) {
//		data = *top(s);
//		pop(s);//��ջ
//		enQueue(sq,data, n + 1);//���
//	}
//	printf("��ת�������Ԫ��Ϊ��");
//	printQ(sq, n + 1);
//
//
//}