/*
	һ�Ŷ������Զ����������ʽ�洢����дһ���㷨�ж����Ƿ���һ����ȫ������
	������
		������Ȼ���Խ����������������£���������Ϊ���������ν����������ϵ��£���������ջ�������սڵ㣬�����սڵ㣬
		�����зǿգ����ж�����Ƿ񻹴��ڽڵ㣬���У������Ϊ����ȫ��������
*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Squeue {
//	biTree data;
//	int front, rear;
//};
//#include <stdio.h>
//#include <stdlib.h>
//bool isComplete(biTree *T,Squeue *sq,int maxSize) {
//	if (!T)return true;
//	bool enQueueS(Squeue *, biTree *, int maxSize);
//	bool deQueueS(Squeue *, biTree *, int maxSize);
//	bool isEmpty(Squeue *);
//	struct biTree *p = T;
//	struct biTree *r = (struct biTree*)malloc(sizeof(struct biTree));
//	enQueueS(sq,p,maxSize);//���ڵ����
//	while (!isEmpty(sq)) {
//		deQueueS(sq,r,maxSize);//ȡ������Ԫ��
//		if (r->data != '#') {
//			enQueueS(sq,r->lchild,maxSize);
//			enQueueS(sq, r->rchild, maxSize);
//		}
//		else {
//			while (!isEmpty(sq)) {//����Ѿ������˿սڵ㣬�жϺ����Ƿ��нڵ�
//				deQueueS(sq, r, maxSize);//ȡ������Ԫ��
//				if (r->data != '#') {
//					return false;
//				}
//			}
//		}
//	}
//	return true;
//}
//int main() {
//	int count = 0;
//	bool isCom;
//	struct biTree *T = (struct biTree*)malloc(sizeof(struct biTree));
//	struct Squeue *sq;
//
//	biTree *create(biTree *);
//	void nodeNum(biTree *,int *);
//
//	Squeue *createQueue(int);
//	
//
//	T = create(T);//����һ�Ŷ�����
//	nodeNum(T,&count);//ͳ�ƶ������ڵ�����
//	sq = createQueue(count);//��������Ϊ�������ڵ������С�Ķ���
//	
//	isCom=isComplete(T,sq,count);
//	isCom ? printf("�ö���������ȫ������") : printf("�ö�����������ȫ������");
//	return 0;
//}