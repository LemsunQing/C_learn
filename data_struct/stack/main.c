#include <stdio.h>
#include <string.h>

#define MAX_URL_SIZE 30
#define MAX_STACK_SIZE 20

//定义网站的结构体
typedef struct
{
	char url[MAX_URL_SIZE];
}StackItem;

//定义堆栈结构体，包含结构体的网站，和栈顶
typedef struct
{
	StackItem items[MAX_STACK_SIZE];
	int top;
}UrlStack;

//初始化堆栈，初始化栈顶
void InitStack(UrlStack tstack)
{
	tstack.top = -1;
}

//出栈
void push(UrlStack stack,char *p)
{
	if(stack.top >= MAX_STACK_SIZE - 1)
	{
		printf("The stack is fulled!\n");
	}
	else
	{
		stack.top++;
		strcpy(stack.items[stack.top].url,p);
		printf("The top is %d\n",stack.top);
	}
}


void pop(UrlStack stack)
{
	if(stack.top < 0)
	{
		printf("The stack is empty!\n");
		return;
	}
	else
	{

		printf("The URL is %s\n",stack.items[stack.top].url);
		stack.top--;
		printf("Top is %d\n",stack.top);
	}
}

UrlStack stack;

int main(void)
{
	InitStack(stack);
	push(stack,"bing.com");
	push(stack,"goole.com");
	pop(stack);
	pop(stack);
	pop(stack);
	return 0;
}
