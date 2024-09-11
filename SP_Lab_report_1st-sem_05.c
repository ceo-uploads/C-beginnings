#include<stdio.h>
/* Write a c program to check whether a given
   number 'N' is divided by two given numbers 'A'
   and 'B'. The program should prompt the user to
   enter the values of 'A' and 'B' and 'N', based
   on the divisablity criteria, the program should
   dispaly the result as one of the following:
   (a) " Divisible by A and B."
   (b) " Divisible by A only."
   (c) " Divisible by B only."
   (d) " Not Divisible by A and B."
*/
int main()
{
	int N, A, B;

	printf("Input the value of - N: ");
	scanf("%d",&N);

	printf("Input the value of - A: ");
	scanf("%d",&A);

	printf("Input the value of - B: ");
	scanf("%d",&B);

	printf("\n");

	if (N % A == 0 && N % B == 0)
	{
		printf("N is divisible by both A and B.\a");
	}
	else if (N % A == 0 && N % B != 0)
	{
		printf("N is divisible by A only.\a");
	}
	else if (N % A != 0 && N % B == 0)
	{
		printf("N is divisible by B only.\a");
	}
	else
	{
		printf("N is not divisible by A and B.\a");
	}

	printf("\n");

	return 0;
}
