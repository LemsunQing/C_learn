#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

//使用表驱动法来判断分数等级
//写出那一年那月有多少天
//
char get_credits(int grade);
bool is_leap(int year);
int return_days(int year,int Month);
int main()
{
	int grade;
	printf("今年%d的%d有%d天\n",2024,2,return_days(2024,2));
	puts("Please write down your grade");
	scanf("%d",&grade);
	printf("Your grades is : %c\n",get_credits(grade));
	return 0;
}

char get_credits(int grade)
{
	char grades[]={'F','F','F','F','F','F','D','C','B','A','A'};
	return grades[grade/10];
}
bool is_leap(int year)
{
	return(year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int return_days(int year, int Month)
{
	int day[] = {31,is_leap(year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31};
	return day[Month - 1];
}
