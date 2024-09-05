#include<stdio.h>
/* Write a C program to print the numbers from 1 to
   10 without using any loop construct(for,while,do-while).
   You must have to use at least one condition.
*/
void printNumbers(int n)
{
	if (n > 0)
	{
		printNumbers(n - 1);
		printf("%d\n", n);
	}
}

int main()
{
	int start = 1;
	int end = 10;

	if (start <= end)
	{
		printNumbers(end);
		printf("\n");
	}

	return 0;
}
