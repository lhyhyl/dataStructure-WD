/*
	������������ö�������洢�ṹ�����һ���ǵݹ��㷨��������ĸ߶�
	������
		��Ҫ���÷ǵݹ�ķ�ʽ����ö������ĸ߶ȣ����ǲ��ò�α���������ʵģ���Ϊ��һ��һ��Ĳ��ͺܺ��������������ʵ�֣�
		����Ψһ���ѵ������������ε�֪�߶ȸü�һ�ˣ����ǿ�������һ����־num������¼ÿһ����ջ�Ľڵ�����������ǳ�ջ��
		�ﵽ����ֵʱҲ����ζ�����ǵĸ߶ȸü�һ��
*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Squeue {
//	biTree *arr;
//	int front, rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getHigh(biTree *T,Squeue *sq,int maxSize) {
//	int oldNum=0,curNum=0,high=0;//��¼һ���ж��ٽڵ�
//	struct biTree *p = T;
//	struct biTree *r=(struct biTree *)malloc(sizeof(struct biTree));
//	bool enQueueS(Squeue *, biTree *, int );
//	bool isEmpty(Squeue *);
//	bool deQueueS(Squeue *, biTree *, int);
//
//	enQueueS(sq,p,maxSize);//�����ڵ����
//	oldNum++;//��ʱ������ֻ��һ���ڵ�
//
//	while (!isEmpty(sq)) {
//		deQueueS(sq,r,maxSize);//ȡ������Ԫ��
//		if (r->lchild) {
//			curNum++;//��һ��Ľڵ���+1
//			enQueueS(sq, r->lchild, maxSize);//�����ڵ����
//		}
//		if (r->rchild) {
//			curNum++;//��һ��Ľڵ���+1
//			enQueueS(sq, r->rchild, maxSize);//�����ڵ����
//		}
//		if (!--oldNum) {//���һ���Ԫ����ȡ�꣬�߶�+1
//			high++;
//			oldNum = curNum;//��oldNum=0ʱ������һ��Ľڵ���������
//			curNum = 0;//��һ��ڵ����
//		}
//		
//	}
//	return high;
//}
//int main() {
//	int count=0;
//	//����������������
//	struct biTree *T=(struct biTree *)malloc(sizeof(struct biTree));
//	struct Squeue *sq;
//	biTree *create(biTree *);
//	void nodeNum(biTree *,int *);
//	Squeue *createQueue(int);
//	T = create(T);
//	nodeNum(T,&count);
//	sq = createQueue(count);//����һ����СΪ���ڵ�����Ķ���
//
//	printf("�ö������ĸ߶�Ϊ��%d",getHigh(T, sq, count));
//	return 0;
//}