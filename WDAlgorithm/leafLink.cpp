///*
//	���һ���㷨����������Ҷ�ڵ㰴�����ҵ�˳������һ����������ͷָ��Ϊhead������������������ʽ�洢������ʱ��Ҷ�ڵ��
//	��ָ������ŵ�����ָ�롣
//	������
//		����Ҫ��Ҷ�ڵ�����������ô��������Ҫ���������ҵ�˳���ҳ�Ҷ�ڵ㣬Ҫ���������ĳ���˳�򣬿��Բ����������򣬺���
//		�������ǲ������������
//*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//struct biTree *h = (struct biTree *)malloc(sizeof(struct biTree));//����һ��ͷ���
//struct biTree *pre = h;
//biTree *leafLink(biTree *b) {//��������b�е�����Ҷ�ӽ��������
//	if (b) {
//		leafLink(b->lchild);//�������������
//		if (!b->lchild && !b->rchild) {//Ҷ�ڵ�
//				pre->rchild = b;
//				pre = b;
//			
//		}
//		leafLink(b->rchild);//�������������
//		pre->rchild = NULL;//��������β
//	}
//	return h;
//}
//int main() {
//	struct biTree *b = (struct biTree *)malloc(sizeof(struct biTree ));
//	biTree *create(biTree *);
//	b = create(b);//����һ�Ŷ�����
//	leafLink(b);
//	while (h->rchild) {
//		printf("%c ", h->rchild->data);
//		h = h->rchild;
//	}
//	return 0;
//}