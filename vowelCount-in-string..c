#include<stdio.h>
/*Certainly! Below is a simple C program that counts the number
  of vowels in the given string "Generative AI will change the
  world." and displays the total count.
*/

int vowel(char ch)
{
	switch(ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		{
			return 1;
		}
	default:
		{
			return 0;
		}
	}
}

int countVowel(const char *str)
{
	int count = 0;

	while(*str != '\0')
	{
		if (vowel(*str))
		{
			count++;
		}
		str++;
	}

	return count;
}

int main()
{
	const char *s = "Generative AI will change the world.";

	int vowelCount = countVowel(s);

	printf("Total number of Vowels in the string : %d. \n", vowelCount);

	return 0;
}
