/*
	ɾ��������Ψһ����Сֵ
	������
		Ŀǰ���뵽�ľ��Ǳ�������������¼����С�ڵ��ָ�룬Ȼ�����ɾ����ʱ�临�Ӷ�ΪO(n).
*/
struct Link {
	int data;
	Link* next;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void deleteMin(Link *p) {
	Link *preMinp = p, *minP = p->next,*preQ=p->next, *q = p->next->next,*f;
	while (q) {
		if (q->data < minP->data) {//����ȵ�ǰֵ��С
			minP = q;//����
			preMinp = preQ;//ǰ��һ�����
		}
		preQ = q;//����ǰ��
		q = q->next;
	}
	f = minP;
	preMinp->next = minP->next;//ɾ��
	free(f);//�ͷ�

}
int main() {
		int n,data;
		//��������
		Link* head = (Link*)malloc(sizeof(Link));
		Link* createLink(int);
		void printfNowLink(Link*);
		head = createLink(0);
		deleteMin(head);
		printfNowLink(head);
		return 0;
}