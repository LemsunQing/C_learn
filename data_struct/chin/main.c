#include <stdio.h>
#include <string.h>

int main(void)
{
	typedef struct Node
	{
		int id;
		char title[20];
		struct Node *nextp;
	}_Node;

	_Node name1;
	_Node name2;

	name1.nextp = &name2;
	_Node *p = &name1;
	p -> id = 1;					//数组指针引用结构体元素
	strcpy(name1.title,"Helllo");	//不能使用指针给字符数组赋值，只能使用字符串处理函数

	printf("结构体大小为%zu\n\a",sizeof(_Node));
	printf("%s\n",name1.title);
}
