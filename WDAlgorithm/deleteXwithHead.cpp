///*
//	�ڴ�ͷ���ĵ�����L��,ɾ������ֵΪX�Ľڵ㣬���ͷ���ռ䣬����ֵΪX�Ľڵ㲻Ψһ
//	������
//		���������ƣ�ֻ�Ƕ���һ��ͷ��㡣
//*/
//struct Link {
//
//	int data;
//	Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void deleteX(Link *&p,int delNum) {
//	Link* q;//���ǵݹ鷽��
//	if (p == NULL) return;
//	if (p->data==delNum) {
//		q = p;
//		p = p->next;
//		free(q);
//		deleteX(p,delNum);
//	}
//	else {
//		deleteX(p->next, delNum);
//	}
//	//����ȡ�ݹ飬ֱ�ӱ���
//	//Link *pre = p, *q = p->next,*r;
//	//while (q) {
//	//	if (q->data==delNum) {
//	//		r = q;//rָ���ɾ���ڵ�
//	//		q = q->next;//
//	//		pre->next = q;//ɾ���ڵ�
//	//		free(r);//�ͷŽڵ�
//	//	}
//	//	else {
//	//		pre = q;
//	//		q = q->next;
//	//		
//	//	}
//	//}
//}
//
//int main() {
//	//��������
//	Link* head = (Link*)malloc(sizeof(Link));
//	Link* createLink(int);
//	void printfNowLink(Link * );
//	head = createLink(0);
//	int n, data, delNum;
//	printfNowLink(head);
//	printf("\n");
//	printf("������Ҫɾ����ֵ��");
//	scanf("%d",&delNum);
//	deleteX(head,delNum);
//	printfNowLink(head);
//	return 0;
//}