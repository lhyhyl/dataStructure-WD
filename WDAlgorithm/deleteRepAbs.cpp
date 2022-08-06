/*
	用单链表保存m个整数，节点的结构为[data][next],且|data|<=n。现要求设计一个时间复杂度尽可能高效算法，
	对于链表中绝对值相等的节点，仅保留第一次出现的节点而删除其余绝对值相等的节点。
	分析：
		题目中提到时间复杂度尽可能高效，其本上就是暗示我们采用空间换时间的方式。因为数据是小于等于n的，我们可以开辟一块
		大小为n的数组，初始值为0，之后我们遍历链表，节点值既是我们寻找的下标，如果下标所在的数组值为0，则将值变为1，如果
		数组值已经为1，则说明在此之前我们遇见过绝对值相同的元素，故将此节点删除。
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
//	int *arr = (int *)malloc(sizeof(int)*n);//这里记住大小是sizeof(int)*n，如果只写n是不对的
//	for (int i = 0; i < n;i++) {//赋初值0
//		*(arr + i) = 0;
//	}
//	Link *pre = h, *p = h->next, *r;
//	while (p) {
//		if (*(arr+abs(p->type.data))==0) {//首次访问，作上记录
//			*(arr + abs(p->type.data)) = 1;
//			pre = p;
//			p = p->next;
//		}
//		else {
//			r = p->next;
//			pre->next = p->next;//删除
//			free(p);//释放
//			p = r;
//		}
//	}
//}
//int main() {
//	Link *head,*p;
//	int n = 100;//我们这里默许创建的链表里的节点值的绝对值<=100
//	Link *createLink(int);
//	head = createLink(0);//0代表我要创建的链表值类型为int
//	deleteRepAbs(head,n);
//	p = head->next;
//	printf("去重后链表为：");
//	while (p) {
//		printf("%d ",p->type.data);
//		p = p->next;
//	}
//	return 0;
//}