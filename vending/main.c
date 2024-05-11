#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void)
{
	const int8_t PRINC = 5;
	int8_t coin = 0;
	int8_t blance = 0;
	printf("We have a kind of drink,It cost 5$,We just recive 1,2 or 5$\n");
	while(blance < PRINC)
	{
		scanf("%" PRIu8,&coin);
		if(coin == 1 || coin == 2 || coin == 5)
		{
			blance += coin;
			printf("You toss total %"PRIu8" $ money is not enough\n",blance);
		}

		else
		{
			printf("We can't recive this \n");
		}
	}
	if(blance > PRINC)
	{
		printf("Have above 5$,chage %"PRIu8"\n",blance - PRINC);
	}
	printf("Thanks use this vendinng machine,pick your drink\n");
	return 0;
}
