/*
	设有一个带头结点的单链表，其节点均为正值，设计一个算法，反复找出单链表中最小值输出并删除，直到单链表为空，最后删除头结点
	分析：
		按照以往的经验，我们需要遍历它，为了保证不断链，我们需要设置pre，p，minPre，min，r等5个指针。
*/
//struct Link {
//	int data;
//	Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void inputAndDeleteLink(Link *h) {
//	Link *pre = h, *minPre = h, *p = h->next, *min = h->next, *r;
//	while (h->next!=h) {//如果头结点后面还有值，说明未结束
//		while (p!=h) {//寻找最小值
//			if (min->data>p->data) {
//				minPre = pre;
//				min = p;
//			}
//			pre = p;
//			p = p->next;
//		}
//		printf("%d ",min->data);
//		r = min->next;
//		minPre->next = min->next;//删除当前最小值
//		free(min);//释放节点空间
//		p = h->next;//又重头开始遍历
//		pre = h;
//		minPre = h;
//		min = h->next;
//	}
//	free(h);//最后释放头结点
//}
//int main() {
//	Link *head;
//	Link *createSinLoopLink();
//	head = createSinLoopLink();
//	inputAndDeleteLink(head);
//	return 0;
//}