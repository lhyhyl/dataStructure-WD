/*
	��һ����ͷ���ĵ��������һ�������ҵ�ָ���ĵ�����k���ڵ㣬����ڵ�ֵ��������1�����򷵻�0��ǰ�᲻�ܸı����������ܸ�Ч

	������
		���ǿ�����ͳ�Ƴ��ܹ��Ľڵ���count����ô�ýڵ��˳����num=count-k+1,��Ȼ���k>count,ֱ�ӷ���0��ʱ�临�Ӷ�ΪO(n)
		���ﻹ����һ�ָ��ӱ�ݵķ�����ֻ����������һ�Σ�������������ָ�룬�ʼ��ָ���׽ڵ㣬Ȼ����q���ƶ�k���ڵ㣬֮��p
		qͬ���ƶ�����qΪNULLʱ��p���ڵ�λ�ñ��ǵ�����k���ڵ��λ��
*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int findTheReciprocalK(Link *h,int k) {//���ǵ�һ�ֽⷨ
//	struct Link *p = h->next;
//	int count = 0,num;
//	while (p) {//ͳ��Ԫ�ظ���
//		count++;
//		p = p->next;
//	}
//	p = h->next;
//	if (k > count) {
//		return 0;
//	}
//	else {
//		num = count - k + 1;
//		while (--num) {//����Ҫ��--num�������num--���ᵼ��pΪ��һ��Ԫ�أ�ע��
//			p = p->next;
//		}
//		printf("%d",p->data);
//		return 1;
//	}
//}
//int findTheReciprocalK2(Link *h,int k) {//���ǵڶ��ֽⷨ
//	struct Link *p = h->next, *q = h->next;
//	int count = k;
//	while (count--) {
//		if (q==NULL) {
//			printf("������%d���ڵ㲻����",k);
//			return 0;
//		}
//		q = q->next;
//	}
//	while (q!=NULL) {
//		p = p->next;
//		q = q->next;
//	}
//	printf("������%d���ڵ�ֵΪ��%d",k,p->data);
//	return 1;
//}
//int main() {
//	int k;
//	struct Link *head;
//	Link *createLink(int);
//	head = createLink(0);
//	printf("������Ҫ�鵹���ڼ�������k=");
//	scanf("%d",&k);
//	//findTheReciprocalK(head,k);
//	findTheReciprocalK2(head, k);
//
//	return 0;
//}