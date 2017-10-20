#include <stdio.h>

typedef int Status;
typedef int ElemType;

typedef struct LNode{
	ElemType data;
	struct LNode * next; 
}LNode,* LinkList;

typedef struct stack{
	LinkList top;
} STACK;

//接口定义
void initStack(STACK &S);
