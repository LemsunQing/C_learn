#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <inttypes.h>
int main(void)
{
	const uint8_t TOTAL_LAPS = 10;
		uint8_t current_lap = 0;
		while(current_lap < TOTAL_LAPS)
		{
			printf("Have runned %"PRIu8" lap\n",current_lap);
			current_lap++;
		}
		return 0;
}
