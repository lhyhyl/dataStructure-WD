/*
	����һ����ͷ���ĵ�������ڵ��Ϊ��ֵ�����һ���㷨�������ҳ�����������Сֵ�����ɾ����ֱ��������Ϊ�գ����ɾ��ͷ���
	������
		���������ľ��飬������Ҫ��������Ϊ�˱�֤��������������Ҫ����pre��p��minPre��min��r��5��ָ�롣
*/
//struct Link {
//	int data;
//	Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void inputAndDeleteLink(Link *h) {
//	Link *pre = h, *minPre = h, *p = h->next, *min = h->next, *r;
//	while (h->next!=h) {//���ͷ�����滹��ֵ��˵��δ����
//		while (p!=h) {//Ѱ����Сֵ
//			if (min->data>p->data) {
//				minPre = pre;
//				min = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		printf("%d ",min->data);
//		r = min->next;
//		minPre->next = min->next;//ɾ����ǰ��Сֵ
//		free(min);//�ͷŽڵ�ռ�
//		p = h->next;//����ͷ��ʼ����
//		pre = h;
//		minPre = h;
//		min = h->next;
//	}
//	free(h);//����ͷ�ͷ���
//}
//int main() {
//	Link *head;
//	Link *createSinLoopLink();
//	head = createSinLoopLink();
//	inputAndDeleteLink(head);
//	return 0;
//}