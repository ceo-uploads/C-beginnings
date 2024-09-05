#include<stdio.h>
/* Write a C program that takes an integer as input
   and determines whether the number is prime or not.
   The mathematical conditions for determining whether
   a positive integer 'n' is prime or not are as follows:
   a) 'n' should be greater than 1.
   b) 'n' should not have divisors other than 1 and itself.
*/

int isPrime(int num)
{
	if (num <= 1)
	{
		return 0;
	}

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int number;
	printf("Enter an integer: ");
	scanf("%d",&number);

	if (isPrime(number))
	{
		printf("%d is a prime number.\n\a", number);
	}
	else
	{
		printf("%d is not a prime number.\n\a", number);
	}

	return 0;
}
