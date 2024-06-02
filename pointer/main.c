#include <stdio.h>

void add_num(int* numptr);

int main(void)
{
	int number = 0;
	int* numberp;
	printf("number is %d\n",number);
	add_num(&number);
	printf("number is %d\n",number);

}
void add_num(int *numptr)
{
	(*numptr)++;
}
