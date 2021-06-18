/*
	���ļ����ڴ�������������������������������������������������������������������
*/
struct biTree {
	char data;
	struct biTree *lchild;
	struct biTree *rchild;
	int ltag, rtag;//���ڽ��б��
};
#include <stdio.h>

void inThread(biTree *p, biTree *pre ) {//��������������
	if (p!=NULL) {
		inThread(p->lchild,pre);
		if (p->lchild==NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre!=NULL && pre->rchild==NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->rchild,pre);
	}
}
void preThread(biTree *p, biTree *pre) {//��������������
	if (p != NULL) {

		if (p->lchild == NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->lchild, pre);
		inThread(p->rchild, pre);
	}
}
void postThread(biTree *p, biTree *pre) {//��������������
	if (p != NULL) {
		inThread(p->lchild, pre);
		inThread(p->rchild, pre);
		if (p->lchild == NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre != NULL && pre->rchild == NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		
	}
}