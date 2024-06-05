#include<stdio.h>
#include<stdint.h>
#include<inttypes.h>
#include<stdbool.h>

/*程序用来测试输出固定字长的字符串
 * 检测并提取特定的字符串包含的数据信息
 *
 *
 * */

int main(void)
{
	char str_buff[20] = {0};
	int32_t num_2l = 1152;
	int32_t num_3 = 123;
	printf("num_21打印值为%d,打印的16进制值为%0x,打印的固定右靠齐5长度为%50x\n",num_2l,num_2l,num_2l);
	printf("num_3l为%d,%0x,%50x\n",num_3,num_3,num_3);

	printf("\033[2J");//使用ANSI转义字符清除屏幕
	printf("新的一行");
	printf("\033[H");
	printf("\033[J");
	printf("这是新的一行\n\a");
}
