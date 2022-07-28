///*哈夫曼树及哈夫曼编码实现*/
//
//# include<stdio.h>
//# include<malloc.h>
//# include<string.h>
//# define N 30						//叶子结点的最大值
//# define M 2 * N - 1				//所有结点的最大值
//# define MAX 99999
//
///*哈夫曼树的类型定义*/
//typedef struct {
//	int weight;						//结点的权值
//	int parent;						//双亲的下标
//	int LChild;						//左孩子结点的下标
//	int RChild;						//右孩子结点的下标
//}HTNode, HuffmanTree[M + 1];		//HuffmanTree是一个结构数组类型，0号单元不用
//
//HuffmanTree ht;
//
///*在ht[1]至ht[n]的范围内选择两个parent为0且weight最小的结点，其序号分别赋给s1，s2*/
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
///*创建哈夫曼树算法*/
//void CrtHuffmanTree(HuffmanTree ht, int w[], int n) {
//	//构造哈夫曼树ht[M+1],w[]存放n个权值
//	int i;
//	for (i = 1; i <= n; i++) {		//1至n号单元存放叶子结点，初始化
//		ht[i].weight = w[i - 1];
//		ht[i].parent = 0;
//		ht[i].LChild = 0;
//		ht[i].RChild = 0;
//	}
//	int m = 2 * n - 1;				//所有结点总数
//	for (i = n + 1; i <= m; i++) {	//n+1至m号单元存放非叶结点，初始化
//		ht[i].weight = 0;
//		ht[i].parent = 0;
//		ht[i].LChild = 0;
//		ht[i].RChild = 0;
//	}
//
//	/*初始化完毕，开始创建非叶结点*/
//	int s1, s2;//当前最小两值的序号
//	for (i = n + 1; i <= m; i++) {	//创建非叶结点，建哈夫曼树
//		Select(ht, i - 1, &s1, &s2);//在ht[1]至ht[i-1]的范围内选择两个parent为0且weight最小的结点，其序号分别赋给s1，s2
//		ht[i].weight = ht[s1].weight + ht[s2].weight;
//		ht[s1].parent = i;
//		ht[s2].parent = i;
//		ht[i].LChild = s1;
//		ht[i].RChild = s2;
//	}
//}
//
///*哈夫曼编码*/
//void CrtHuffmanCode(HuffmanTree ht, int n, char str[]) {
//	//从叶子结点到根，逆向求每个叶子结点(共n个)对应的哈夫曼编码
//	char* cd;
//	cd = (char*)malloc(n * sizeof(char));	//分配当前编码的工作空间
//	for (int i = 1; i <= n; i++) {			//求n个叶子结点对应的哈夫曼编码
//		int start = n - 1, c = i, p = ht[i].parent;
//		while (p != 0) {
//			--start;
//			if (ht[p].LChild == c)			//左分支标0
//				cd[start] = '0';
//			else
//				cd[start] = '1';			//右分支标1
//			c = p;							//向上倒堆
//			p = ht[p].parent;
//		}
//		printf("%c的编码：", str[i - 1]);
//		for (int j = 0; j < n; j++) {
//			if (cd[j] == '0' || cd[j] == '1') {
//				printf("%c", cd[j]);		//编码输出
//			}
//		}
//		printf("\n");
//		memset(cd, -1, n);//将cd初始化
//	}
//}
//
//int main() {
//	int i, w[5] = { 2,3,5,7,8 };
//	char str[5] = { 'c','s','e','a','t' };
//	CrtHuffmanTree(ht, w, 5);
//	printf("哈夫曼树各结点值：\n");
//	for (i = 1; i <= 9; i++)
//		printf("%d ", ht[i].weight);
//	printf("\n");
//	CrtHuffmanCode(ht, 5, str);
//	return 0;
//}
