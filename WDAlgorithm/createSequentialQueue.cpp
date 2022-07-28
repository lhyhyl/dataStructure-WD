/*
	���ļ����ڴ���һ��˳����У����ӣ����,�ж϶ӿգ��ж϶����Ȳ���
*/
#include <stdio.h>
#include <stdlib.h>
//#define TYPE biTree* 
//#define TYPE char
#define TYPE int

struct biTree {
	char data;
	biTree *lchild;
	biTree *rchild;
};
struct Squeue {
	TYPE *arr;
	int front, rear;
};
//��������
Squeue *createQueue(int n) {
	Squeue *sq = ( Squeue *)malloc(sizeof( Squeue));
	sq->arr = (TYPE *)malloc(sizeof(TYPE)*n);//�����С
	sq->front = 0;
	sq->rear = 0;
	return sq;
}
//�ж϶���(�����������һ���洢��Ԫ��ʵ��,Լ����ͷָ���ڶ�βָ�����һ��λ����Ϊ�����ı�־)
bool isFull(Squeue *sq, int maxSize) {
	return (sq->rear + 1) % maxSize == sq->front;
}
//�ж϶ӿ�
bool isEmpty(Squeue *sq) {
	return sq->front == sq->rear;
}
//�ж϶�����Ԫ�ظ���
int count(Squeue *sq, int maxSize) {
	return (sq->rear - sq->front + maxSize) % maxSize;
}
//���
bool enQueue(Squeue *sq, TYPE data, int maxSize) {
	if (isFull(sq, maxSize)) return false;
	sq->arr[sq->rear] = data;
	sq->rear = (sq->rear + 1) % maxSize;
	return true;
}

//����
bool deQueue(Squeue *sq, TYPE *data,int maxSize) {
	if (isEmpty(sq)) return false;
	*data = sq->arr[sq->front];
	sq->front = (sq->front + 1) % maxSize;
	return true;
}

//��ӡ������Ԫ��
//void printQ(Squeue *sq,int maxSize) {
//	if (isEmpty(sq)) return ;
//	int np = sq->front;
//	while (np!=sq->rear) {
//		printf("%d ",sq->arr[np]);
//		np = (np + 1) % maxSize;
//	}
//}
