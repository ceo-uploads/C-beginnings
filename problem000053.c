#include<stdio.h>
void calculateSalary(int age, int salary)
{
	if (age < 30)
	{
		salary = 30000;
	}
	else
	{
		salary = 50000;
	}

	printf("Calculated Salary: %d. \n", salary);
}

int main()
{
	char name[50];
	int age;
	int salary = 0;

	printf("Enter Employee Name: ");
	scanf("%[^\n]s",&name);
	printf("Enter the Age First: ");
	scanf("%d",&age);

	printf("\n");
	printf("Getting Information------- \n");
	printf("\n");

	printf("Employee: %s. \n", name);
	printf("Age: %d. \n", age);

	calculateSalary(age,salary);

	return 0;
}
