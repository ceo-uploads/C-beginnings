#include<stdio.h>
/* Write a C program to check whether a given integer is positive
   even, negative even, positive odd, negative odd. Print even
   if the number is 0....
*/
int main()
{
	int n;

	printf("Input an integer: ");
	scanf("%d",&n);

	printf("\n");

	if (n % 2 == 0)
	{
		if (n >= 0)
		{
			printf("Positive Even number..");
		}
		else if (n < 0)
		{
			printf("Negative Even number..");
		}
	}
	else if (n % 2 != 0)
	{
		if (n > 0)
		{
			printf("Positive ODD number..");
		}
		else if (n < 0)
		{
			printf("Negative ODD number..");
		}
	}
	else
	{
		printf("It is not a number or Integer..");
	}

	printf("\n");

	return 0;
}
