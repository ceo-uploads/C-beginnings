#include<stdio.h>
// Write a C program to print a square pattern.

void printSquare(int row)
{
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row; j++)
		{
			printf("* ");
		}

		printf("\n");
	}
}

int main()
{
	int row;

	printf("Enter the number of rows: ");
	scanf("%d",&row);

	printSquare(row);

	return 0;
}
