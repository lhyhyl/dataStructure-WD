///*
//	����ջ���г�����ȣ�ʹ����ȫ��λ��Ӳ��ǰ��
//	������
//		ԭ����Ŀ�ϳ�������ϸ�������������һ���Ϊ�򵥵��⡣������ʵҲ������Ҫ�õ�ջ�������������ԣ�������Ҫ��Ӳ��
//		�ݴ棬�������ȳ�ȥ���ѣ����Խ�ջ���������ṹҲ�ǿ��Եģ�ֻҪ�ܹ��ݴ����ݡ���������ĿҪ����ջ��
//		Ϊ��ģ���г���λ�����ǲ��������������洢������AΪ��ڴ��𳵣�����BΪ���ڴ��𳵣�A������������ջ����ΪӲ����ѹ��
//		ջ����Ϊ������ֱ�ӽ���B�����ջ��Ԫ��ȫ����ջ����B�����ˣ����Ҫ��
//*/
//#include <stdio.h>
//#include <stdlib.h>
//struct Stack {
//	char *arr;
//	int len;
//	int top;
//};
//void trainArrange(char *arrA,char *arrB,Stack *s) {//������ڳ��ᣬ���ڳ��ᣬջ
//	int i = 0, j = 0;
//	char *c;//���ճ�ջӲ��
//	bool push(Stack *,char );
//	char *top(Stack *);
//	bool pop(Stack *);
//	bool empty(Stack *);
//	while (i<10) {
//		if (arrA[i]=='H') {//Ӳ������ջ
//			push(s,arrA[i]);
//		}
//		else {//��������B
//			arrB[j++] = arrA[i];
//		}
//		i++;
//	}
//	while (!empty(s)) {//��ջ�л���Ӳ����ȫ����B
//		c = top(s);
//		pop(s);
//		arrB[j++] = *c;
//	}
//
//}
//int main() {
//	char arrA[10] = {'H','S','S','H','H','S','S','S','H','H' };//��H����Ӳ����S��������
//	char arrB[10] = { 0 };//B�����ʼΪ��
//	Stack *createStack(int);
//	Stack *s;
//	s = createStack(10);//����ջ
//	trainArrange(arrA,arrB,s);
//	for (int i = 0; i < 10;i++) {//��ӡ���ź�ĳ���
//		printf("%c",arrB[i]);
//
//	}
//	return 0;
//}