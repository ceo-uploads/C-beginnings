#include<stdio.h>
/* Suppose an Array has 6 elements and they are 40, 45, 50, 55, 60,
   and 65. We know that the position of an array is always one greater
   than its index value. For example, if the index is i, then the
   position will be i + 1. By analyzing this scenario, write a c
   program that would calculate the sum of the array elements in
   the Even position.
*/
int main()
{
	int arr[] = {40, 45, 50, 55, 60, 65};

	int size = sizeof(arr) / sizeof(arr[0]);

	int sum = 0;

	for (int i = 1; i < size; i += 2)
	{
		sum += arr[i];
	}

	printf("Sum of the array elements in the Even position: %d\n", sum);

	return 0;
}
