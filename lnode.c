#include <stdio.h>
#include <stdlib.h>

//定义线性表单链表存储结构
typedef struct LNode{
    char data;
    struct LNode *next;
}LNode, *LinkList;

int main(int argc, char*argv[])
{
    printf("hello world\n");
    int i;
    //创造链表
    LNode *node = (LNode *)malloc(5*sizeof(LNode));
    for(i=0; i<5; i++){
       node[i].data = 1+i;
       node[i].next = &node[i+1];
    }
    LNode node1;
    //循环打印链表
    node1 = node[0];
    for(i=1; i<5; i++){
        if(node1.next != NULL){
            printf("%x---%d\n",node1.next,node1.data);
            node1  = node[i];
        }else{
            break;  
        }
    }
    free(node);
    return 0;
}