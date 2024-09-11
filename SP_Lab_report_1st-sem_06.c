#include<stdio.h>
/* Write a C program to implement a basic calculator. Your
   program should take two numbers and an operator as input
   from the user. The operator can be one of the following '+', '-', '*', '/'
   perform the corresponding operation and display the result. Insure
   that your program handles division by zero gracefully.
*/
int main()
{
	double n1, n2, result;
	char operator;

	printf("Enter Your Equation between two numbers using an operator: ");
	scanf("%lf %c %lf",&n1,&operator,&n2);

	printf("\n");

	switch (operator)
	{
	case '+':
		result = n1 + n2;
		printf("Addition is: %.2lf\n\a", result);
		break;
	case '-':
		result = n1 - n2;
		printf("Substraction is: %2lf\n\a", result);
		break;
	case '*':
		result = n1 * n2;
		printf("Multiplication is: %2lf\n\a", result);
		break;
	case '/':
		if (n2 != 0)
		{
			result = n1/n2;
			printf("Division is: %2lf\n\a", result);
		}
		else
		{
			printf("Error.\n\a");
		}
		break;

	default:
		printf("Invalid operator\n\a");
   }

   return 0;
}
