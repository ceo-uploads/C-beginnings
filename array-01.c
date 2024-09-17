#include<stdio.h>
/* Write a C program in C to store elements in an array
   and print them.
*/

int main()
{
	int arr[100];
	int i, j;

	printf("Here is a function to read and print the array elements : \n");
	printf("--------------------------------------------------------------\n");
	printf("\n");

	printf("Enter the numbers of elements in the array: ");
	scanf("%d",&j);
	printf("\n");

	for (i = 0; i < j; ++i)
	{
		printf("Element - %d : ", i);
		scanf("%d",&arr[i]);
	}

	printf("\n");
	printf("Elements in the array: ");

	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}
