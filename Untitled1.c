#include<stdio.h>
int m&y(int month, year)
{
	int d

	printf("Enter the month number and year in row: ");
	scanf("%d %d",&month,&year);

	switch (month)
	{
	case '1':
		days = 31;
		char monthn[20] =

		break;
	case '2':
		if (year % 4 == 0 && year % 100 == 0)
		{
			printf("February %d has 29 days", year);
		}
		else
		{
			printf("February %d has 28 days", year);
		}
		break;
	case '3':
		printf("March %d has 31 days", year);
		break;
	case '4':
		printf("April %d has 30 days", year);
		break;
	case '5':
		printf("May %d has 31 days", year);
		break;
	case '6':
		printf("June %d has 30 days", year);
		break;
	case '7':
		printf("July %d has 31 days", year);
		break;
	case '8':
		printf("August %d has 31 days", year);
		break;
	case '9':
		printf("September %d has 30 days", year);
		break;
	case '10':
		printf("October %d has 31 days", year);
		break;
	case '11':
		printf("November %d has 30 days", year);
		break;
	case '12':
		printf("December %d has 31 days", year);
		break;
	default:
		printf("Invalid Month number...");
		break;
	}

	printf("\n");


	return 0;
}
