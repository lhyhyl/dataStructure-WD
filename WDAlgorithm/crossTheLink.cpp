///*
//	设线性表L=（a1,a2,a3,...,an-2,an-1,an）,采用带头结点的单链表保存，设计一个空间复杂度为O(1)的
//	算法，得到L'=（a1,an,a2,an-1,a3,an-2...）
//	分析：
//		这道题还是有一点复杂的，不过我们慢慢分析它。我们可以这样来操作，我们设置两个指针slow和fast，其中fast每次走两步，
//		slow每次走一步，当fast到达链尾时，slow刚好处于链表中间节点，之前我们学过链表逆置，接下来我们把slow后面的节点逆置，
//		链表就变成了（a1,a2,a3,...,an,an-1,an-2,...）,然后我们从中间开始遍历，依次将节点插入到前面节点后面，即可完成要求
//*/
//struct Link {
//	union {
//		int data;
//	}type;
//	struct Link *next;
//};
//#include <stdlib.h>
//#include <stdio.h>
//void crossTheLink(Link *h) {
//	void reverse(Link *);
//	struct Link *fast = h->next, *slow = h->next,*mid;
//	mid = (Link*)malloc(sizeof(Link));
//	while (fast->next&&fast->next->next) {//寻找中间节点
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	mid->next = slow->next;
//	reverse(mid);//逆转mid后面的节点
//	//slow->next = mid->next;
//	fast = h->next;
//	slow->next = NULL;
//	slow = mid->next;
//	while (slow) {//逐个进行插入
//		mid = slow->next;
//		slow->next = fast->next;
//		fast->next = slow;
//		slow = mid;
//		fast = fast->next->next;//因为将slow插入了，所以之前的fast下一个是现在的下两个
//	}
//}
//void reverse(Link *h) {//头插法逆置
//	struct Link *p = h->next,*r;
//	h->next = NULL;
//	while (p) {
//		r = p->next;
//		p->next = h->next;
//		h->next = p;
//		p = r;
//	}
//	
//}
//int main() {
//	struct Link *head,*p;
//	Link *createLink(int);
//	head = createLink(0);
//	crossTheLink(head);
//	printf("交叉后的链表为：");
//	p = head->next;
//	while (p) {
//		printf("%d ", p->type.data);
//		p = p->next;
//	}
//	return 0;
//}