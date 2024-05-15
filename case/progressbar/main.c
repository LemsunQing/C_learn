#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <unistd.h>
//写一个进度条来反应程序的准备情况

int main()
{
	const uint32_t TOTAL_STEPS = 50;
	printf("当前进度\n");
	for(int index = 0;index <= TOTAL_STEPS;index++)
	{
		//从头打印完整进度条
		printf("\r[");
		for(int j = 0;j < index;j++)
		{
			printf("#");
		}
		//空格填充
		for(int j = index;j < TOTAL_STEPS;j++)
		{
			printf(" ");
		}
		printf("]%d%%\n",index * 100 /TOTAL_STEPS);
		fflush(stdout);//确保进度条及时显示
		usleep(100000);
	}
	printf("进度完成\n");

	return 0;
}
