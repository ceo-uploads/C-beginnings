#include<stdio.h>
/* Write a C program to check whether a number is
   Even or Odd. You have to take the number from the user
*/
int main()
{
	int n;

	printf("Enter a Number: ");
	scanf("%d",&n);

	printf("\n");

	if (n%2 == 0)
	{
		printf("Number is Even.\a");
	}
	else
	{
		printf("Number is Odd.\a");
	}

	printf("\n");

	return 0;
}
