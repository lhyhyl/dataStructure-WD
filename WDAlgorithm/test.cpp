//
//  main.cpp
//  WD_ds
//
//  Created by ��� on 2022/4/16.
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
//biTree* firstNode(biTree* p) {//�ҵ���������ĵ�һ���ڵ㣬������ڵ�
//    while (p && p->ltag == 0) {
//        p = p->lchild;
//    }
//    return p; 
//}
//biTree* nextNode(biTree* p) {//Ѱ�ҵ�ǰ�ڵ����һ���ڵ�
//    if (p&&p->rtag == 0) return firstNode(p->rchild);
//    else return p->rchild;
//
//}
//void outPut(biTree* T) {//�������
//    for (biTree* p = firstNode(T); p != NULL; p = nextNode(p)) {
//        printf("%c", p->data);
//    }
//}
//int main() {
    //biTree* create(biTree*);//������������������
    //void inThread(biTree*);//����������������������
    //biTree* T = ( biTree*)malloc(sizeof( biTree));
    //T=create(T);//����������
    //if (T!=NULL) {
    //     inThread(T);//������������������
    //     pre->rchild = NULL;
    //     pre->rtag = 1;
    //}
    //outPut(T);//�������


//}
