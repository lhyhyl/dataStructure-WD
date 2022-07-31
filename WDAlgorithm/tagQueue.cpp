///*
//	若希望循环队列中的元素都能得到利用，则需设置一个标志域tag，并以tag 的值为0或1来区分队头指针front和队尾指针rear
//	相同时的队列状态是“空”还是“满”。试编写此结构相应的入队和出队算法。
//	分析：
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
////创建队列
//Squeue *create(int n) {
//	Squeue *sq = (Squeue *)malloc(sizeof(Squeue));
//	sq->arr = (TYPE *)malloc(sizeof(TYPE)*n);//数组大小
//	sq->front = 0;
//	sq->rear = 0;
//	sq->tag = 0;
//	return sq;
//}
////判断队满
//bool isFull(Squeue *sq, int maxSize) {
//	return (sq->rear == sq->front) && (sq->tag == 1);
//}
////判断队空
//bool isEmpty(Squeue *sq) {
//	return (sq->front == sq->rear) && sq->tag==0;
//}
////判断队列中元素个数
//int count(Squeue *sq, int maxSize) {
//	return (sq->rear - sq->front + maxSize) % maxSize;
//}
////入队
//bool enQueue(Squeue *sq, int data, int maxSize) {
//	if (isFull(sq, maxSize)) return false;
//	sq->arr[sq->rear] = data;
//	sq->rear = (sq->rear + 1) % maxSize;
//	sq->tag = 1;
//	return true;
//}
////出队
//bool deQueue(Squeue *sq, int &data, int maxSize) {
//	if (isEmpty(sq)) return false;
//	data = sq->arr[sq->front];
//	sq->front = (sq->front + 1) % maxSize;
//	sq->tag = 0;
//	return true;
//}
