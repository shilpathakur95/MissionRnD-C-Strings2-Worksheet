/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str==NULL)
	return NULL;
	char *last = (char *)malloc(sizeof(char) * 100);
	char temp;
	int len = 0,iterator=0,it;
	while (str[len])
	{
		len++;
	}
	while (len > 0)
	{
		if (str[len] == ' ')
			len--;
		else
			break;
	}
	while (str[len] != ' ')
	{
		*(last + iterator) = str[len];
		len--;
	}
	last[iterator] = '\0';
	iterator--;
	for (it = 0; it <= iterator; it++)
	{
		temp = *(last+it);
		*(last + it)=*(last+iterator);
		*(last + iterator) = temp;
		iterator--;
	}
	return last;
}
