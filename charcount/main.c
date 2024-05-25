#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LETTER_COUNT 26
int main()
{
	char group[]={"abdefsgehuioplkmnhcbvxewqzfast"};
	int frequent[LETTER_COUNT] = {0};
	puts("We get the number of this peice");
	for(int index;group[index] != '\0';index++)
	{
		char ch = tolower(group[index]);

		if(ch >= 'a' &&ch <= 'z')
		{
			frequent[ch - 'a']++;
		}
	}
	puts("the latter number is that");
	for(int index;index < LETTER_COUNT;index++)
	{
		if(frequent > 0)
		{
			printf("%c:%d\n",'a'+index,frequent[index]);
		}
	
	}
	return 0;
}
