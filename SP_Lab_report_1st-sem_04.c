#include<stdio.h>
/* Write a program to find the largest number out
   of three numbers. These numbers will provided
	by users.
*/
int main()
{
	int n1, n2, n3;

	printf("Input Three Numbers in a Row: ");
	scanf("%d %d %d",&n1,&n2,&n3);

	printf("\n");

	if (n1 > n2 && n1 > n3)
	{
		printf("Largest Number = %d\a", n1);
	}
	else if (n2 > n1 && n2 > n3)
	{
		printf("Largest Number = %d\a", n2);
	}
	else
	{
		printf("Largest Number = %d\a", n3);
	}

	printf("\n");

	return 0;
}
