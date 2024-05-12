#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>
/*have a number,you shuhold guess this number*/
int main(void)
{
	int32_t secret_num = 0;
	int32_t guess;
	int32_t status;
	char buffer[50];
	//output a rand number
	srand(time(NULL));
	//it from 1 to 100
	secret_num = rand() % 100 + 1;
	puts("guess what number i think about(1 - 100)");
	do 
	{

		puts("please enter your number:");
		fgets(buffer,sizeof(buffer),stdin);
		status = sscanf(buffer,"%d",&guess);
		if(status != 1)
		{
			puts("it error,please enter a other number");
			continue;
		}
		if(guess < secret_num)
		{
			puts("it is so small,try again");
		}
		if(guess > secret_num)
		{
			puts("it is so big,try again");
		}
	}while(guess != secret_num);
	printf("congretunation you win\n");
	return 0;
}
