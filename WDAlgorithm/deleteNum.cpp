///*
//	��һ����ͷ���ĵ���������Ԫ�ص�����ֵ�����Ա�д����ɾ�����н��ڸ���������ֵ����Ϊ��������������֮���Ԫ�ء�
//	������
//		�ֱ�����pre��p��rָ�룬�������������������ɾ����
//*/
//struct Link {
//	int data;
//	Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void deleteNum(Link *h,int min,int max) {
//	Link *pre = h, *p = h->next, *r;
//	while (p) {
//		if (p->data>min&&p->data<max) {//��������������ɾ��
//			r = p->next;
//			pre->next = p->next;
//			free(p);
//			p = r;
//		}
//		else {
//			pre = p;
//			p = p->next;
//		}
//	}
//}
////int main() {
////	int min, max;
////	Link*head;
////	Link *createLink(int);//��������Ĵ����ҵ�����װ��һ���ļ�
////	void printfNowLink(Link*);
////	head = createLink(0);
////	printf("������Ҫɾ����ֵ���ڵķ�Χ��\n");
////	printf("min=");
////	scanf("%d",&min);
////	printf("max=");
////	scanf("%d", &max);
////	deleteNum(head,min,max);
////	printfNowLink(head);
////	return 0;
////}