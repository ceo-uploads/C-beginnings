#include<stdio.h>
/* Write a C program that takes a character as
   input and prints 1, 0, or -1 according to the
   following rules.
   1. If the character is an uppercase alphabet (A-Z) print 1.
   2. If the character is a lowercase alphabet (a-z) print 0.
   3. If the character is not an alphabet print -1.
*/
int main()
{
	char character;
	int result;

	printf("Enter a character: ");
	scanf("%c",&character);

	printf("\n");

	if (character >= 'A' && character <= 'Z')
	{
		result = 1;
	}
	else if (character >= 'a' && character <= 'z')
	{
		result = 0;
	}
	else
	{
		result = -1;
	}

	printf("Standard Output: %d\n\a", result);

	return 0;
}
