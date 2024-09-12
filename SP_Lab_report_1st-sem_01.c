#include<stdio.h>
/* Write a C program where you have to take input
   from the user. The point will be text. You have
   to print that input with "Hello World!".
*/
int main()
{
	char userinput[100];

	printf("Input some text: ");
	fgets(userinput, sizeof(userinput), stdin);

	printf("Hello World! %s\a", userinput);

	return 0;
}
