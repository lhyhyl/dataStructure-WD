/*
	���ļ����ڴ�������������������������������������������������������������������
*/
struct biTree {
	char data;
	biTree *lchild;
	biTree *rchild;
	int ltag, rtag;//���ڽ��б��
};
#include <stdio.h>
extern biTree* pre = NULL;
void inThread(biTree *p ) {//��������������
	if (p!=NULL) {
		inThread(p->lchild);
		if (p->lchild==NULL) {//���������Ϊ�գ�����ǰ������
			p->lchild = pre;
			p->ltag = 1;
		}
		if (pre!=NULL && pre->rchild==NULL) {//����ǰ�����ĺ������
			pre->rchild = p;
			pre->rtag = 1;
		}
		pre = p;
		inThread(p->rchild);
	}
}
void preThread(biTree *p) {//��������������
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
		inThread(p->lchild);
		inThread(p->rchild);
	}
}
void postThread(biTree *p) {//��������������
	if (p != NULL) {
		inThread(p->lchild);
		inThread(p->rchild);
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