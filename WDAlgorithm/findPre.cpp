///*
//	д�����������������������ָ���ڵ��ں����ǰ�������㷨
//	������
//		�ں��������У����ڵ�p������Ů��������Ů����ǰ������������Ů��������Ů��������Ů����ǰ�������ڵ�p������Ů���ޣ�
//		��������������ָ��ĳ���Ƚڵ�f(p��f�������а���������ĵ�һ���ڵ�)����f������Ů����������Ů�ǽڵ�p�ں����е�ǰ����
//		��f������Ů����˳��ǰ����˫�׵�˫�ף�һֱ�ҵ�˫��������Ů����ʱ����Ů��p��ǰ����������һ���������p����������ĵ�
//		һ���ڵ㣬��ڵ�p������ͺ����¾�û��ǰ����
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//	int ltag, rtag;
//};
//#include <stdio.h>
//#include <stdlib.h>
//biTree *findPre(biTree *T,biTree *p) {//����ǰ�����
//	biTree *f;
//	if (p->rchild&&p->rtag==0) {//���ýڵ����Һ��ӣ���ô����Ů����ǰ��
//		return p->rchild;
//	}
//	else if(p->ltag==0&&p->lchild) {//���ýڵ�ֻ������Ů������Ů����ǰ��
//		return p->lchild;
//	}
//	else {
//		f = p->lchild;//��ʱ������ָ��ĳ���Ƚڵ�
//		while (f&&f->ltag) {//��������Ƚڵ�û������Ů��������ǰ��
//			f = f->lchild;
//		}
//		if (f) {
//			return f->lchild;
//		}
//		else {
//			return NULL;
//		}
//	}
//}
//int main() {
//	biTree *T = (biTree *)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//	T = create(T);
//	void inThread(biTree *,biTree *);
//	inThread(T,NULL);//���������������
//
//	biTree *p = T->rchild->lchild,*pre=NULL;//�ֶ�ָ��һ���ڵ�
//	pre=findPre(T,p);
//	if (pre) {
//		printf("�ڵ�p%c��ǰ�����ֵΪ��%c",p->data,pre->data);
//	}
//	else {
//		printf("�ڵ�pû��ǰ�����");
//	}
//	return 0;
//}