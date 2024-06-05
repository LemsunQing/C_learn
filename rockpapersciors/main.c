#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define ROCK		1
#define PAPER		2
#define SCISSORS	3

void print_choice(size_t move);
int get_player_choice(void);
int get_computer_choice(void);
void determine_winner(int player_move,int computer_move);
/*
 *写石头剪刀布的猜拳游戏
 * */
int main(void) 
{
	//初始化随机数生成器
	srand(time(NULL));
	int player_move = get_player_choice();
	int computer_move = get_computer_choice();

	puts("你选择了");
	print_choice(player_move);
	puts("计算机选择了");
	print_choice(computer_move);

	determine_winner(player_move,computer_move);

	return 0;
}
void print_choice(size_t move)
{
	switch(move)
	{
		case ROCK:
			puts("石头");
			break;
		case PAPER:
			puts("布");
			break;
		case SCISSORS:
			puts("剪刀");
			break;
		default : break;
	}
}
int get_computer_choice(void)
{
	return (rand() % SCISSORS - ROCK + 1) + ROCK;
}
int get_player_choice(void)
{
	int choice;
	printf("请输入1石头 2布 3剪刀\n");
	scanf("%d ",&choice);

	while(choice < ROCK || choice > SCISSORS)
	{
		printf("无效选择!重新选择\n");
		scanf("%d ",&choice);
	}
	return choice;
}
void determine_winner(int player_move,int computer_move)
{
	//规则映射
	if (player_move == computer_move)
	{
		puts("平局!");
	}
	//定义一个胜利的规则而映射，其中键是玩家的移动，值是玩家可以打败计算机的移动
	int winning_move[4] = {0,SCISSORS,ROCK,PAPER};
	if (computer_move == winning_move[player_move])
	{
		puts("你赢了");
	}
	else
	{
		puts("你输了");
	}
}
