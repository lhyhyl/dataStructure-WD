///*
//	���������������������ڵ������Ԫ�أ����ͷŽڵ���ռ�Ĵ洢�ռ䡣
//	������
//		���ǿ����Ƚ�������Ȼ��������������ͷŽڵ�ռ䣬����Ҳ����ֱ�ӽ��б������ҵ�Ŀǰ��Сֵ���������Ȼ���ͷţ�ע�ⲻҪ����
//		���������ȡ�ڶ��ַ�ʽ
//*/
//struct Link {
//	int data;
//	Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void printAndDel(Link *h) {
//	Link *pre = h, *p = h->next, *r,*min=h->next,*minPre=h;//Ϊ�˲�����˳�����У�������Ҫʱ�̱���ڵ��ǰ������
//	p = h->next;
//	printf("���˳��Ϊ��\n");
//	while (h->next) {
//		while (p) {
//			if (p->data < min->data) {
//				minPre = pre;
//				min = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		printf("%d ",min->data);
//		//r = min->next;
//		minPre->next = min->next;
//		free(min);
//		pre = minPre = h;
//		p = min = h->next;
//	}
//	printf("\n");
//}
//int main() {
//	Link *head;
//	Link *createLink(int);
//	void printfNowLink(Link*);
//	head = createLink(0);
//	printAndDel(head);
//	printfNowLink(head);
//	return 0;
//}