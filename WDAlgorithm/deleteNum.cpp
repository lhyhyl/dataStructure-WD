///*
//	设一个带头结点的单链表所有元素的数据值无序，试编写函数删除表中介于给定的两个值（作为函数参数给出）之间的元素。
//	分析：
//		分别设置pre，p，r指针，遍历，符合条件便进行删除。
//*/
//struct Link {
//	int data;
//	struct Link *next;
//};
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//void deleteNum(Link *h,int min,int max) {
//	struct Link *pre = h, *p = h->next, *r;
//	while (p) {
//		if (p->data>min&&p->data<max) {//符合条件，进行删除
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
////	struct Link*head;
////	Link *createLink(int);//创建链表的代码我单独封装了一个文件
////	void printfNowLink(Link*);
////	head = createLink(0);
////	printf("请输入要删除的值所在的范围：\n");
////	printf("min=");
////	scanf("%d",&min);
////	printf("max=");
////	scanf("%d", &max);
////	deleteNum(head,min,max);
////	printfNowLink(head);
////	return 0;
////}