/*
	������ѭ������������ͷָ��ֱ�Ϊh1��h2����дһ������������h2���ӵ�h1֮��Ҫ�����Ӻ�������Ա���ѭ��������ʽ��
	������
		��������Ҫ�ҵ�h1��β��㣬�ҵ�β����β����nextָ��h2���׽ڵ㣬Ȼ���ҵ�h2��β��㣬����nextָ��ָ��h1��
		�ʹ󹦸���ˡ�
*/
//struct Link {
//	int data;
//	Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void linkTwoLists(Link *h1,Link *h2) {
//	Link *p1 = h1->next, *p2 = h2->next;
//	while (p1->next != h1) p1 = p1->next;//����Ҫȥ�ж�p1->next�Ƿ����h1�������жϳ��Ƿ񵽴�β���
//	p1->next = p2;
//	while (p2->next != h2) p2 = p2->next;
//	p2->next = h1;
//	free(h2);//�ͷ�h2
//}
//int main() {
//	Link *h1, *h2,*p;
//	Link *createSinLoopLink();
//	h1 = createSinLoopLink();
//	h2 = createSinLoopLink();
//	linkTwoLists(h1,h2);
//	p = h1->next;
//	while (p!=h1) {
//		printf("%d ",p->data);
//		p = p->next;
//	}
//	return 0;
//}