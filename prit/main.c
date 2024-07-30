#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>
#include<string.h>

/*
 * 
 *
 *
 * */

int main(void)
{
	char str_buff[20] = {0};
	int32_t num_2l = 1152;
	int32_t num_3 = 123;
	printf("num_21%d,16%0x,5%50x\n",num_2l,num_2l,num_2l);
	printf("num_3l%d,%0x,%50x\n",num_3,num_3,num_3);

	printf("\033[2J");//ANSI
	printf("");
	printf("\033[H");
	printf("\033[J");
	printf("\n\a");
	printf("\033[1;31mThistextisinredandbold.\033[0m\n");
    printf("\033[0;36m****Linux*****0;36m\033[0m\r\n");
    printf("\033[1;36m****Linux*****1;36m\033[0m\r\n");
    printf("\033[4;36m****Linux*****4;36m\033[0m\r\n");
    printf("\033[5;36m****Linux*****5;36m\033[0m\r\n");
    printf("\033[7;36m****Linux*****7;36m\033[0m\r\n");
    printf("\033[8;36m****Linux*****8;36m\033[0m\r\n");
    printf("\033[22;36m****Linux*****22;36m\033[0m\r\n");
    printf("\033[24;36m****Linux*****24;36m\033[0m\r\n");
    printf("\033[25;36m****Linux*****25;36m\033[0m\r\n");
    printf("\033[27;36m****Linux*****27;36m\033[0m\r\n");
    printf("\033[30m****Linux*****30\033[0m\r\n");
    printf("\033[31m****Linux*****31\033[0m\r\n");
    printf("\033[32m****Linux*****32\033[0m\r\n");
    printf("\033[33m****Linux*****33\033[0m\r\n");
    printf("\033[34m****Linux*****34\033[0m\r\n");
    printf("\033[35m****Linux*****35\033[0m\r\n");
        printf("\033[36m****Linux*****36\033[0m\r\n");
    printf("\033[37m****Linux*****37\033[0m\r\n");

        printf("\033[40m****Linux*****40\033[0m\r\n");
    printf("\033[41m****Linux*****41\033[0m\r\n");
    printf("\033[42m****Linux*****42\033[0m\r\n");
    printf("\033[43m****Linux*****43\033[0m\r\n");
    printf("\033[44m****Linux*****44\033[0m\r\n");
    printf("\033[45m****Linux*****45\033[0m\r\n");
        printf("\033[46m****Linux*****46\033[0m\r\n");
    printf("\033[47m****Linux*****47\033[0m\r\n");
}
