#include<stdio.h>
void checkOddEven(int arr[10], int size)
{
	printf("Odd Numbers are: \n");

	for(int i = 0; i < size; ++i)
	{
		if (arr[i] == size)
		{
			printf("%d is Even. \n", arr[i]);
		}
		else
		{
			printf("%d is Odd. \n", arr[i]);
		}
	}
}
int main()
{
	int numbers[] = {2,7,14,9,6,3,8};

	int size = sizeof(numbers) / sizeof(numbers[0]);


	checkOddEven(numbers,size);

	return 0;
}
