#include<stdio.h>
/* Write a C program to find and print the square of all the even
   values from 1 to 4.......
*/
int main()
{
	int i;

	printf("List of square of each of the even value from 1 to 4: ");

	printf("\n");

	for (i = 1; i <= 4; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d^2 = %d", i, i*i);
		}

		printf("\n");
	}

	return 0;

}
