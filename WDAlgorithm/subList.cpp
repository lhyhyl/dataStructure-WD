/*
	������������������A��B����ƺ����ж�B�Ƿ�ΪA�������С�
	������
		��ֱ�ӵķ�����ѭ����������A���ĵ�һ��Ԫ�ؿ�ʼ��B���Աȣ���������ͬ����A����һ���ֿ�ʼ��ֱ��������β
*/
//struct Link {
//	int data;
//	Link *next;
//
//};
//
//#include <stdio.h>
//
//void subList(Link *a,Link *b) {
//	Link *la = a ,*pA = la->next, *pB = b->next;
//	while (pA&&pB) {
//		if (pA->data==pB->data) {//��ȼ����Ա���һ��
//			pA = pA->next;
//			pB = pB->next;
//		}
//		else {
//			pB = b->next;//pb��ͷ��ʼ��pa�Ա�
//			la = la->next;//ʧ��һ�Σ�la�����ƶ�һ���ڵ�
//			pA = la->next;//pa����һ���ڵ��ֿ�ʼ
//		}
//	}
//	pB == NULL ? printf("true") : printf("false");//���pbΪNULL��˵���ѱȶ����
//	
//}
//int main() {
//	Link *a, *b;
//	Link *createLink(int);
//	a = createLink(0);
//	b = createLink(0);
//	subList(a,b);
//	return 0;
//}