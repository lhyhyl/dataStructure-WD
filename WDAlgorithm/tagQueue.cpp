///*
//	��ϣ��ѭ�������е�Ԫ�ض��ܵõ����ã���������һ����־��tag������tag ��ֵΪ0��1�����ֶ�ͷָ��front�Ͷ�βָ��rear
//	��ͬʱ�Ķ���״̬�ǡ��ա����ǡ��������Ա�д�˽ṹ��Ӧ����Ӻͳ����㷨��
//	������
//		
//*/
//#include <stdio.h>
//#include <stdlib.h>
//#define TYPE int 
//struct Squeue {
//	TYPE *arr;
//	int front, rear;
//	int tag;
//};
//
////��������
//Squeue *create(int n) {
//	Squeue *sq = (Squeue *)malloc(sizeof(Squeue));
//	sq->arr = (TYPE *)malloc(sizeof(TYPE)*n);//�����С
//	sq->front = 0;
//	sq->rear = 0;
//	sq->tag = 0;
//	return sq;
//}
////�ж϶���
//bool isFull(Squeue *sq, int maxSize) {
//	return (sq->rear == sq->front) && (sq->tag == 1);
//}
////�ж϶ӿ�
//bool isEmpty(Squeue *sq) {
//	return (sq->front == sq->rear) && sq->tag==0;
//}
////�ж϶�����Ԫ�ظ���
//int count(Squeue *sq, int maxSize) {
//	return (sq->rear - sq->front + maxSize) % maxSize;
//}
////���
//bool enQueue(Squeue *sq, int data, int maxSize) {
//	if (isFull(sq, maxSize)) return false;
//	sq->arr[sq->rear] = data;
//	sq->rear = (sq->rear + 1) % maxSize;
//	sq->tag = 1;
//	return true;
//}
////����
//bool deQueue(Squeue *sq, int &data, int maxSize) {
//	if (isEmpty(sq)) return false;
//	data = sq->arr[sq->front];
//	sq->front = (sq->front + 1) % maxSize;
//	sq->tag = 0;
//	return true;
//}
