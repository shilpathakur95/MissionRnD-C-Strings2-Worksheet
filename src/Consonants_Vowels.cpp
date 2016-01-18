/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	if (str == NULL)
	{
		*consonants = 0;
		*vowels = 0;
		return;
	}
	int iterator = 0;
	int cons_count = 0, vowel_count = 0;
	while (str[iterator])
	{
		if (str[iterator] == 'A' || str[iterator] == 'E' || str[iterator] == 'I' || str[iterator] == 'O' || str[iterator] == 'U' || str[iterator] == 'a' || str[iterator] == 'e' || str[iterator] == 'i' || str[iterator] == 'o' || str[iterator] == 'u')
			vowel_count++;
		else if (str[iterator] >= 'a'&& str[iterator] <= 'z' || str[iterator] >= 'A'&&str[iterator] <= 'Z')
			cons_count++;
		iterator++;
	}
	*vowels = vowel_count;
	*consonants = cons_count;
}
