/*
	p、q分别为指向该二叉树中任意两个节点的指针，试编写算法ancestor(root,p,q,r),找到p、q的最近公共祖先节点r
	分析：
		上一道题其实可以给我们一些启示，就是我们可以将任意节点的祖先存起来，那这里我们也可以用两个栈，分别将p、q
		的祖先存在栈中，因为栈顶是最近的祖先节点，所以我们可以一次往下寻找相同节点，第一次找到的相同节点便是最近公共
		祖先节点。
*/
//struct biTree {
//	char data;
//	struct biTree *lchild;
//	struct biTree *rchild;
//};
//struct Stack {
//	biTree *arr;
//	int len;
//	int top;
//};
//#include <stdio.h>
//#include <stdlib.h>
//void findAncestor(Stack *s, biTree *m, biTree *x) {
//	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
//	bool empty(Stack *);
//	bool pushS(Stack *, biTree*);
//	bool pop(Stack *);
//	biTree *top(Stack *);//返回得是一个指针
//	while (m || !empty(s)) {
//		if (m) {//一路将所有左孩子入栈
//			pushS(s, m);
//			m = m->lchild;
//		}
//		else {//没有左孩子，
//			m = top(s);
//			if (m->rchild && m != r) {//将右子树的所有左孩子入栈
//				r = m;
//				m = m->rchild;
//			}
//			else {//当既没有左孩子也没有右孩子时，该出栈了
//				pop(s);//被查找元素先出栈
//				if (m->data == x->data) {//找到了，那么如果栈中有元素，那全都是它的祖先
//					break;
//				}
//				m = NULL;//一定要将p置空，不然又会把m的左孩子入栈
//			}
//		}
//	}
//}
//void findNearestAncestor(biTree *T, biTree *p, biTree *q, biTree **r) {
//	int count = 0;
//	struct biTree *m = T;//另起指针m，指向根节点
//	void nodeNum(biTree *, int *);
//	nodeNum(T, &count);//统计节点个数
//	struct Stack *sp, *sq;
//	Stack *createStack(int);
//	sp = createStack(count);
//	sq = createStack(count);
//
//	findAncestor(sp, m, p);//寻找p节点的祖先
//	findAncestor(sq, m, q);//寻找q节点的祖先
//
//	//经过上面的操作，栈sp和sq里面已经存好了p、q各自的祖先，接下来便是寻找最近祖先
//	bool contain(Stack *,biTree *);
//	bool empty(Stack *);
//	bool pushS(Stack *, biTree*);
//	bool pop(Stack *);
//	biTree *top(Stack *);//返回得是一个指针
//	while (!empty(sp)) {//当sp不空
//		*r = top(sp);
//		if (contain(sq,*r)) {//判断sq中知否包含d
//			break;
//		}
//		pop(sp);
//	}
//}
//int main() {
//	int count = 0;
//	struct biTree *T = (struct biTree *)malloc(sizeof(struct biTree)), *p, *q;
//	struct biTree *r = (struct biTree *)malloc(sizeof(struct biTree));
//	biTree *create(biTree *);
//
//	T = create(T);
//	p = T->lchild->lchild->rchild;//手动指定一个节点，切记不要指成NULL了
//	q = T->rchild->rchild;
//	//p = T->lchild;
//	//q = T->rchild;
//	findNearestAncestor(T, p, q, &r);//记得这里要将r的地址传过去，才能进行改变
//	printf("p q最近公共结点为值为：%c",r->data);
//	return 0;
//}