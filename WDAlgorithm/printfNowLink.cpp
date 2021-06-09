struct Link {
	int data;
	struct Link *next;
};
#include <stdio.h>
void printfNowLink(Link *head) {
	printf("操作后链表值为：");
	while (head->next) {
		printf("%d ", head->next->data);
		head = head->next;
	}
}