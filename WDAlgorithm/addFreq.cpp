/*
	给一个非循环双向链表增加一个freq值，用以表示它的访问频率，每访问一次freq就+1，然后需要将该链表按照非增的顺序
	排列，同时最近访问的节点排在相同频度节点的前面，以便使频繁访问的节点总是靠近表头。试编写符合上述要求的Locate(L,x)
	函数，该运算为函数过程，返回找到节点的地址，类型为指针型。

	分析：
		这道题咋一看很唬人，还引入了一个新概念，其实并不难，拆分开来其实就是 查找+排序；我们需要先找到我们要访问的节点
		，更改它的freq值，然后按照freq值的大小从表头寻找插入位置，这样便完成了一次locate操作。
*/
struct Link {
	int data;
	struct Link *pre;
	struct Link *next;
	int freq;
};
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void locate(Link *h,int num) {
	int flag = 0;//找到标志
	struct Link *pre=h, *p = h->next, *t,*preQ=h,*q;
	while (p) {
		if (p->data==num) {//如果找到
			flag = 1;//表示找到
			p->freq++;//freq+1
			t = p;//将该节点保存起来
			if (p->next) {
				pre->next = p->next;//将该节点抠出来
				p->next->pre = pre;
			}
			else {
				pre->next = NULL;//这里也要注意，如果我们查找的节点是最后一个节点，我们要将next指向NULL，不然之后遍历时会出问题
			}
			q = h->next;//这里需要注意，q应该始终指向改变了的首节点，之前我在定义时去指定，会出现bug
			while (q) {//进行排序
				if (t->freq >= q->freq) {//当找到的节点的freq大于等于当前遍历节点时，插入
					t->next = q;
					q->pre = t;
					preQ->next = t;
					t->pre = preQ;
					break;
				}
				preQ = q;
				q = q->next;
			}
			break;
		}
		pre = p;
		p = p->next;
	}
	if (!flag) {
		printf("未找到该元素,序列不做改变");
	}
}
//int main() {
//	int n, data,num;
//	struct Link *head = (struct Link *)malloc(sizeof(struct Link));
//	head->next = NULL;
//	head->pre = NULL;
//	struct Link *p = head;
//	printf("请输入节点个数：n=");
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		printf("请输入第%d个节点值:", i + 1);
//		scanf("%d", &data);
//		struct Link *newP = (struct Link*)malloc(sizeof(struct Link));
//		newP->data = data;
//		newP->pre = p;
//		newP->freq = 0;
//		p->next = newP;
//		p = newP;
//	}
//	p->next = NULL;
//	do {
//		printf("请输入要查找的值,输入9999代表结束：num=");
//		scanf("%d",&num);
//		if (num == 9999)continue;//如果num=9999，跳入下一次循环
//		locate(head,num);
//		//p = head->next;
//		printf("调整后链表为：\n");
//		while (p) {
//			printf("%d ",p->data);
//			p = p->next;
//		}
//	} while (num!=9999);
//	return 0;
//}