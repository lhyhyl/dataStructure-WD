///*
//	��һ����ѭ��˫����������һ��freqֵ�����Ա�ʾ���ķ���Ƶ�ʣ�ÿ����һ��freq��+1��Ȼ����Ҫ���������շ�����˳��
//	���У�ͬʱ������ʵĽڵ�������ͬƵ�Ƚڵ��ǰ�棬�Ա�ʹƵ�����ʵĽڵ����ǿ�����ͷ���Ա�д��������Ҫ���Locate(L,x)
//	������������Ϊ�������̣������ҵ��ڵ�ĵ�ַ������Ϊָ���͡�
//
//	������
//		�����զһ���ܻ��ˣ���������һ���¸����ʵ�����ѣ���ֿ�����ʵ���� ����+����������Ҫ���ҵ�����Ҫ���ʵĽڵ�
//		����������freqֵ��Ȼ����freqֵ�Ĵ�С�ӱ�ͷѰ�Ҳ���λ�ã������������һ��locate������
//*/
//struct Link {
//	int data;
//	Link *pre;
//	Link *next;
//	int freq;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void locate(Link *h,int num) {
//	int flag = 0;//�ҵ���־
//	Link *pre=h, *p = h->next, *t,*preQ=h,*q;
//	while (p) {
//		if (p->data==num) {//����ҵ�
//			flag = 1;//��ʾ�ҵ�
//			p->freq++;//freq+1
//			t = p;//���ýڵ㱣������
//			if (p->next) {
//				pre->next = p->next;//���ýڵ�ٳ���
//				p->next->pre = pre;
//			}
//			else {
//				pre->next = NULL;//����ҲҪע�⣬������ǲ��ҵĽڵ������һ���ڵ㣬����Ҫ��nextָ��NULL����Ȼ֮�����ʱ�������
//			}
//			q = h->next;//������Ҫע�⣬qӦ��ʼ��ָ��ı��˵��׽ڵ㣬֮ǰ���ڶ���ʱȥָ���������bug
//			while (q) {//��������
//				if (t->freq >= q->freq) {//���ҵ��Ľڵ��freq���ڵ��ڵ�ǰ�����ڵ�ʱ������
//					t->next = q;
//					q->pre = t;
//					preQ->next = t;
//					t->pre = preQ;
//					break;
//				}
//				preQ = q;
//				q = q->next;
//			}
//			break;
//		}
//		pre = p;
//		p = p->next;
//	}
//	if (!flag) {
//		printf("δ�ҵ���Ԫ��,���в����ı�");
//	}
//}
//int main() {
//	int n, data,num;
//	Link *head = ( Link *)malloc(sizeof(Link));
//	head->next = NULL;
//	head->pre = NULL;
//	Link *p = head;
//	printf("������ڵ������n=");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("�������%d���ڵ�ֵ:", i + 1);
//		scanf("%d", &data);
//		Link *newP = ( Link*)malloc(sizeof( Link));
//		newP->data = data;
//		newP->pre = p;
//		newP->freq = 0;
//		p->next = newP;
//		p = newP;
//	}
//	p->next = NULL;
//	do {
//		printf("������Ҫ���ҵ�ֵ,����9999���������num=");
//		scanf("%d",&num);
//		if (num == 9999)continue;//���num=9999��������һ��ѭ��
//		locate(head,num);
//		//p = head->next;
//		printf("����������Ϊ��\n");
//		while (p) {
//			printf("%d ",p->data);
//			p = p->next;
//		}
//	} while (num!=9999);
//	return 0;
//}