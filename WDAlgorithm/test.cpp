//
//  main.cpp
//  WD_ds
//
//  Created by 李海阳 on 2022/4/16.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//struct biTree {
//    char data;
//    struct biTree* lchild;
//    struct biTree* rchild;
//    int ltag, rtag;
//};
//extern biTree* pre;
//biTree* firstNode(biTree* p) {//找到中序遍历的第一个节点，传入根节点
//    while (p && p->ltag == 0) {
//        p = p->lchild;
//    }
//    return p; 
//}
//biTree* nextNode(biTree* p) {//寻找当前节点的下一个节点
//    if (p&&p->rtag == 0) return firstNode(p->rchild);
//    else return p->rchild;
//
//}
//void outPut(biTree* T) {//中序输出
//    for (biTree* p = firstNode(T); p != NULL; p = nextNode(p)) {
//        printf("%c", p->data);
//    }
//}
//int main() {
    //biTree* create(biTree*);//创建二叉树函数引入
    //void inThread(biTree*);//创建线索二叉树函数引入
    //biTree* T = ( biTree*)malloc(sizeof( biTree));
    //T=create(T);//创建二叉树
    //if (T!=NULL) {
    //     inThread(T);//创建中序线索二叉树
    //     pre->rchild = NULL;
    //     pre->rtag = 1;
    //}
    //outPut(T);//遍历输出


//}
