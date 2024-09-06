#include<stdio.h>
/* Create a C program that takes two input numbers from the
   user, donate as 'a' and 'n', 'a' represents the initial value
	, while 'n' represents the limit. Ensure that 'a' is not
	greater than 'n'. The program should then find and display
	the summation and average of all the odd numbers within the
	range from 'a' to 'n'.
*/
int main()
{
	int a, n;

	printf("Enter the initial number: ");
	scanf("%d",&a);

	printf("Enter the limit: ");
	scanf("%d",&n);

	if (a > n)
	{
		printf("Error: Input an number of 'a' not greater than 'n'");
	}

	int sum = 0, count = 0;

	for (int i = a; i <= n; ++i)
	{
		if (i % 2 != 0)
		{
			sum += i;
			count++;
		}
	}

	double average = (count > 0) ? (double) sum / count : 0;

	printf("\n Sum is %d\n Avg is %.2f\n\a", sum, average);

	return 0;
}
