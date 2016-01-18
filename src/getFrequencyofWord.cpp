/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int iterator1=0, iterator2=0,iterator3;
	int count = 0,len=0;
	while (word[iterator2])
	{
		len++;
		iterator2++;
	}
	iterator2 = 0;
	while (str[iterator1])
	{
		iterator3 = iterator1 + 1;
		iterator2 = 0;
		while (word[iterator2])
		{
			if (str[iterator1] == word[iterator2])
			{
				iterator2++;
				iterator1++;
			}
			else
			{
				iterator1++;
				break;
			}
		}
		if (iterator2 == len)
		{
			count++;
		}
		iterator1 = iterator3;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	int iterator = 0;
	if (str[iterator] == '\0')
		return 0;
	while (word[iterator] && str[iterator])
	{
		if (str[iterator] == word[iterator])
		{
			iterator++;
		}
		else
			break;
	}
	if (word[iterator] == '\0')
	{
		return 1 + count_word_int_str_way_2_recursion(str + 1, word);
	}
	else
		return count_word_int_str_way_2_recursion(str + 1, word);
}


