#include "is_armstrong.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./main <int value>\n");
		return 1;
	}


	int input_value  = atoi(argv[1]);
	int is_armstrong = is_armstrong_number(input_value);
	
	if (is_armstrong == 1)
	{
		printf("the value %i is armstrong\n", input_value);
		return 0;
	}
	
	printf("the value %i is not armstrong\n", input_value);
	return 2;
}
