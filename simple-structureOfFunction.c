#include<stdio.h>
int sum(int a, int b)
{
	int s;

	s = a + b;

	return s;
}
int main(Void)
{
	int a, b;

	printf("Enter the Value of a: ");
	scanf("%d",&a);

	printf("Enter the Value of b: ");
	scanf("%d",&b);

	int total = sum(a, b);

	printf("The total is: %d", total);

	return 0;
}
