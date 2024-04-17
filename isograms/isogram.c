#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool is_isogram(const char phrase[]);

int main(void)
{
	if (is_isogram(""))
	{
		printf("it's an isogram\n");
		return 0;
	}

	printf("it isn't an isogram\n");
	return 1;
}

bool is_isogram(const char phrase[])
{
	if (!phrase)
        	return false;

	int length  = 0;
	int count   = 0;   
	int tracker = 0;

	char phrase_copy[strlen(phrase)];

	for (int i = 0; phrase[i] != '\0'; i++)
	{
		if (phrase[i] != '-' && phrase[i] != ' ')
		{
			phrase_copy[tracker] = tolower(phrase[i]);
			tracker++;           
			length++;
		}
	}

	phrase_copy[tracker] = '\0';
    
	for (int i = 0; i < length; i++)
	{

		for (int j = 0; j < length; j++)
		{
			if (phrase_copy[i] == phrase_copy[j])
			{
				count++;
			}
		}    
	}

	if (count == length)
	{
		return true;
	}
	
	return false;
}
