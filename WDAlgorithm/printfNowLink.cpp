struct Link {
	int data;
	Link *next;
};
#include <stdio.h>
void printfNowLink(Link *head) {
	printf("����ֵΪ��");
	while (head->next) {
		printf("%d ", head->next->data);
		head = head->next;
	}
}