///*
//	��һ�����������ڵ��ֵ������ͬ��������������к�����������зֱ��������һά����A��B�У��Ա�д�㷨�����ö������Ķ�������
//	������
//		����һ�����͵���֪�����������������İ���������ʵ�ֲ������£�
//		1���ȸ�����������ȷ�����ĸ��ڵ�
//		2�����ݸ��ڵ������������������л��ֳ�����������������������Щ�ڵ㣬Ȼ��������������ڵ������������еĴ���ȷ��������
//		�ĸ��ڵ㣬���ص�����һ��
//		����ظ���ֱ��ÿ����������һ���ڵ�Ϊֹ
//*/
//struct biTree {
//	char data;
//	biTree *lchild;
//	biTree *rchild;
//};
//#include <stdio.h>
//#include <stdlib.h>
//biTree *preInCreate(char *arrIn,char *arrPre,int l1,int h1,int l2,int h2) {
//	//l1 h1 Ϊ����ĵ�һ�����һ���ڵ��±꣬l2 h2 Ϊ����ĵ�һ�����һ���ڵ��±�
//	int llen, rlen,i;//������������������
//	 biTree *root = ( biTree *)malloc(sizeof( biTree));
//	root->data = *(arrPre + l2);
//	for (i = l1; *(arrIn + i) != root->data; i++);//�ҵ����ڵ����������е�λ��
//	
//	llen = i - l1;//��¼��߽ڵ����
//	rlen = h1 - i;//��¼���ڵ��ұ߽ڵ����
//	if (llen) {
//		root->lchild = preInCreate(arrIn,arrPre,l1,l1+llen-1,l2+1,l2+llen);//����ߵ������п���һ���µļ����Ҹ��ڵ�
//	}
//	else {
//		root->lchild = NULL;
//	}
//	if (rlen) {
//		root->rchild = preInCreate(arrIn, arrPre, h1-llen+1, h1, h2-llen+1, h2);//���ұߵ������п���һ���µļ����Ҹ��ڵ�
//	}
//	else {
//		root->rchild = NULL;
//	}
//	return root;
//}
//int main() {
//	char arrIn[] = { 'D','B','E','A','F','C','G' }, 
//		arrPre[] = {'A','B','D','E','C','F','G'};
//	biTree *root;
//	void inOrder(biTree *);
//	void preOrder(biTree *);
//	root = preInCreate(arrIn,arrPre,0,6,0,6);
//	inOrder(root);
//	printf("\n");
//	preOrder(root);
//
//	return 0;
//}