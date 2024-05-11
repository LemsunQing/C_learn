#include<stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <inttypes.h>
int main(void)
{
	bool is_technician = false;
	bool is_smart_student = false;
	if (is_technician|is_smart_student)
	{
		printf("you have a good furture\n");
	}
	else
	{
		printf("you should take a work\n");
	}
	printf("Hello,World!\n");
	return 0;
}
