#include<stdio.h>
/* Write a C program to copy the unique elements
   of an integer array into another array. The
   program should ensure that no duplicate elements
   are included in the new array.
*/
int main()
{
	int arr1[7];
	int arr2[7];
	int arr3[7];
	int i, j, k, flag, count1 = 0, count2 = 0;


	printf("Enter elements: ");

	for (i = 0; i < 7; i++)
		{
        scanf("%d", &arr1[i]);
      }

	for (i = 0; i < 7; i++)
		{
        flag = 0;
        for (j = i + 1; j < 10; j++)
        {
            if (arr1[i] == arr1[j])
            {
					arr3[count2] = arr1[i];
					count2++;
					flag = 1;
					break;
            }
		   }
        if (flag == 0)
         {
            arr2[count1] = arr1[i];
            count1++;
         }
      }

    printf("Unique elements: ");
    for (i = 0; i < count1; i++)
		{
        printf("%d ", arr2[i]);
      }
    printf("\n");


    return 0;
}
