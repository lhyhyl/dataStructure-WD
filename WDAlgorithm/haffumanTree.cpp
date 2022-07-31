///*��������������������ʵ��*/
//
//# include<stdio.h>
//# include<malloc.h>
//# include<string.h>
//# define N 30						//Ҷ�ӽ������ֵ
//# define M 2 * N - 1				//���н������ֵ
//# define MAX 99999
//
///*�������������Ͷ���*/
//typedef struct {
//	int weight;						//����Ȩֵ
//	int parent;						//˫�׵��±�
//	int LChild;						//���ӽ����±�
//	int RChild;						//�Һ��ӽ����±�
//}HTNode, HuffmanTree[M + 1];		//HuffmanTree��һ���ṹ�������ͣ�0�ŵ�Ԫ����
//
//HuffmanTree ht;
//
///*��ht[1]��ht[n]�ķ�Χ��ѡ������parentΪ0��weight��С�Ľ�㣬����ŷֱ𸳸�s1��s2*/
//void Select(HuffmanTree ht, int n, int* s1, int* s2) {
//	int i, min1 = MAX, min2 = MAX;
//	*s1 = 0;
//	*s2 = 0;
//	for (i = 1; i <= n; i++) {
//		if (ht[i].parent == 0) {
//			if (ht[i].weight < min1) {
//				min2 = min1;
//				*s2 = *s1;
//				min1 = ht[i].weight;
//				*s1 = i;
//			}
//			else if (ht[i].weight < min2) {
//				min2 = ht[i].weight;
//				*s2 = i;
//			}
//		}
//	}
//}
//
///*�������������㷨*/
//void CrtHuffmanTree(HuffmanTree ht, int w[], int n) {
//	//�����������ht[M+1],w[]���n��Ȩֵ
//	int i;
//	for (i = 1; i <= n; i++) {		//1��n�ŵ�Ԫ���Ҷ�ӽ�㣬��ʼ��
//		ht[i].weight = w[i - 1];
//		ht[i].parent = 0;
//		ht[i].LChild = 0;
//		ht[i].RChild = 0;
//	}
//	int m = 2 * n - 1;				//���н������
//	for (i = n + 1; i <= m; i++) {	//n+1��m�ŵ�Ԫ��ŷ�Ҷ��㣬��ʼ��
//		ht[i].weight = 0;
//		ht[i].parent = 0;
//		ht[i].LChild = 0;
//		ht[i].RChild = 0;
//	}
//
//	/*��ʼ����ϣ���ʼ������Ҷ���*/
//	int s1, s2;//��ǰ��С��ֵ�����
//	for (i = n + 1; i <= m; i++) {	//������Ҷ��㣬����������
//		Select(ht, i - 1, &s1, &s2);//��ht[1]��ht[i-1]�ķ�Χ��ѡ������parentΪ0��weight��С�Ľ�㣬����ŷֱ𸳸�s1��s2
//		ht[i].weight = ht[s1].weight + ht[s2].weight;
//		ht[s1].parent = i;
//		ht[s2].parent = i;
//		ht[i].LChild = s1;
//		ht[i].RChild = s2;
//	}
//}
//
///*����������*/
//void CrtHuffmanCode(HuffmanTree ht, int n, char str[]) {
//	//��Ҷ�ӽ�㵽����������ÿ��Ҷ�ӽ��(��n��)��Ӧ�Ĺ���������
//	char* cd;
//	cd = (char*)malloc(n * sizeof(char));	//���䵱ǰ����Ĺ����ռ�
//	for (int i = 1; i <= n; i++) {			//��n��Ҷ�ӽ���Ӧ�Ĺ���������
//		int start = n - 1, c = i, p = ht[i].parent;
//		while (p != 0) {
//			--start;
//			if (ht[p].LChild == c)			//���֧��0
//				cd[start] = '0';
//			else
//				cd[start] = '1';			//�ҷ�֧��1
//			c = p;							//���ϵ���
//			p = ht[p].parent;
//		}
//		printf("%c�ı��룺", str[i - 1]);
//		for (int j = 0; j < n; j++) {
//			if (cd[j] == '0' || cd[j] == '1') {
//				printf("%c", cd[j]);		//�������
//			}
//		}
//		printf("\n");
//		memset(cd, -1, n);//��cd��ʼ��
//	}
//}
//
//int main() {
//	int i, w[5] = { 2,3,5,7,8 };
//	char str[5] = { 'c','s','e','a','t' };
//	CrtHuffmanTree(ht, w, 5);
//	printf("�������������ֵ��\n");
//	for (i = 1; i <= 9; i++)
//		printf("%d ", ht[i].weight);
//	printf("\n");
//	CrtHuffmanCode(ht, 5, str);
//	return 0;
//}
