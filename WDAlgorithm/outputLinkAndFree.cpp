///*
//	按递增次序输出单链表各节点的数据元素，并释放节点所占的存储空间。
//	分析：
//		我们可以先进行排序，然后依次输出，并释放节点空间，我们也可以直接进行遍历，找到目前最小值进行输出，然后释放，注意不要断链
//		我们这里采取第二种方式
//*/
//struct Link {
//	int data;
//	Link *next;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void printAndDel(Link *h) {
//	Link *pre = h, *p = h->next, *r,*min=h->next,*minPre=h;//为了操作的顺利进行，我们需要时刻保存节点的前驱与后继
//	p = h->next;
//	printf("输出顺序为：\n");
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