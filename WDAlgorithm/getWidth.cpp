///*
//	������������ö�������洢�ṹ�����һ���㷨����ǿն������Ŀ�ȣ������нڵ���������һ��Ľڵ������
//	������
//		��������߶��ǵ����ͬС�졣������Ȼ���Բ�ȡ��α�����ͳ��ÿһ��Ľڵ�������ҵ����������һ�㡣
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//
//};
//struct LinkQueue {//�ϴ���߶Ȳ��õ���˳����У���β�����ʽ���У���¶��մ����
//	struct Link *front, *rear;
//};
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int getWidth(biTree *b, LinkQueue *lq) {
//	int oldNum = 0, curNum = 0, width = 0;
//	bool enQueue(LinkQueue *lq, biTree *node);
//	bool deQueue(LinkQueue *lq, biTree **node);
//	bool isEmpty(LinkQueue *lq);
//	struct biTree *p = b;
//	struct biTree *r=(struct biTree*)malloc(sizeof(struct biTree));
//	if (p) {
//		enQueue(lq, p);//���
//		oldNum++;
//		width = 1;
//		while (!isEmpty(lq)) {
//			while (oldNum--) {
//				deQueue(lq, &r);//����Ԫ�س���
//				if (r->lchild) {//�������ӣ����������
//					enQueue(lq, r->lchild);
//					curNum++;//��ǰ����Ԫ�ؼ�1
//				}
//				if (r->rchild) {//�����Һ��ӣ����Һ������
//					enQueue(lq, r->rchild);
//					curNum++;//��ǰ����Ԫ�ؼ�1
//				}
//			}
//			curNum > width ? width = curNum : NULL;//�����ǰ����Ԫ�ض���֮ǰ�ģ���ȱ��
//			oldNum = curNum;//�������в���
//			curNum = 0;
//
//		}
//
//	}
//	return width;
//}
//int main() {
//	struct biTree *b = (struct biTree*)malloc(sizeof(struct biTree));
//	struct LinkQueue *lq;
//
//	biTree *create(biTree *);
//	b = create(b);//����һ�Ŷ�����
//
//	LinkQueue *create();
//	lq = create();//������ʽ����
//
//	printf("�ö������Ŀ��Ϊ��%d",getWidth(b, lq));
//	return 0;
//}