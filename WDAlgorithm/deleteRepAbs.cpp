/*
	�õ�������m���������ڵ�ĽṹΪ[data][next],��|data|<=n����Ҫ�����һ��ʱ�临�ӶȾ����ܸ�Ч�㷨��
	���������о���ֵ��ȵĽڵ㣬��������һ�γ��ֵĽڵ��ɾ���������ֵ��ȵĽڵ㡣
	������
		��Ŀ���ᵽʱ�临�ӶȾ����ܸ�Ч���䱾�Ͼ��ǰ�ʾ���ǲ��ÿռ任ʱ��ķ�ʽ����Ϊ������С�ڵ���n�ģ����ǿ��Կ���һ��
		��СΪn�����飬��ʼֵΪ0��֮�����Ǳ��������ڵ�ֵ��������Ѱ�ҵ��±꣬����±����ڵ�����ֵΪ0����ֵ��Ϊ1�����
		����ֵ�Ѿ�Ϊ1����˵���ڴ�֮ǰ��������������ֵ��ͬ��Ԫ�أ��ʽ��˽ڵ�ɾ����
*/
//struct Link {
//	union {
//		int data;
//	}type;
//	Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//void deleteRepAbs(Link *h,int n) {
//	int *arr = (int *)malloc(sizeof(int)*n);//�����ס��С��sizeof(int)*n�����ֻдn�ǲ��Ե�
//	for (int i = 0; i < n;i++) {//����ֵ0
//		*(arr + i) = 0;
//	}
//	Link *pre = h, *p = h->next, *r;
//	while (p) {
//		if (*(arr+abs(p->type.data))==0) {//�״η��ʣ����ϼ�¼
//			*(arr + abs(p->type.data)) = 1;
//			pre = p;
//			p = p->next;
//		}
//		else {
//			r = p->next;
//			pre->next = p->next;//ɾ��
//			free(p);//�ͷ�
//			p = r;
//		}
//	}
//}
//int main() {
//	Link *head,*p;
//	int n = 100;//��������Ĭ������������Ľڵ�ֵ�ľ���ֵ<=100
//	Link *createLink(int);
//	head = createLink(0);//0������Ҫ����������ֵ����Ϊint
//	deleteRepAbs(head,n);
//	p = head->next;
//	printf("ȥ�غ�����Ϊ��");
//	while (p) {
//		printf("%d ",p->type.data);
//		p = p->next;
//	}
//	return 0;
//}