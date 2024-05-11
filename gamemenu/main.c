#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

/*写一个游戏进入的选项界面
 * 1.进入新游戏
 * 2.继续游戏
 * 3.读取存档
 * 4.退出游戏
*/
int main(void)
{
	uint8_t choice = 0;
	do
	{
		printf("****欢迎！****\n请选择\n1.进入新游戏\n2.继续游戏\n3.读取存档\n4.退出游戏\n");
		scanf("%"PRIu8,&choice);
		switch (choice)
		{
			case 1 : 
			puts("载入游戏中...");
			puts("游戏开始");
			puts("游戏已经通关，返回菜单");
			break;
			case 2 :
			puts("载入最后的存档...");
			puts("游戏继续");
			puts("游戏已经通关，返回菜单");
			break;
			case 3 :
			puts("请选择继续游戏的存档");
			puts("游戏继续");
			puts("游戏已经通关，返回菜单");
			break;
			case 4 :
			puts("退出游戏...");
			break;
			default :
			puts("没有对应的选项，请重新选择");
		}
		
	}
	while(choice != 4);
	return 0;
}
