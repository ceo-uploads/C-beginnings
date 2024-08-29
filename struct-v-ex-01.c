#include<stdio.h>
#include<string.h>
struct Bike
{
	char make[20];
	char model[20];
	int topSpeed;
	int year;
};
int main()
{
	struct Bike Mybike;

	strcpy(Mybike.make, "Kawasaki - Ninja");
	strcpy(Mybike.model, "H2R");
	Mybike.topSpeed = 465;
	Mybike.year = 2023;

	printf("Bike Information: \n");
	printf("-------------------------\n");
	printf("Bike Name: %s. \n", Mybike.make);
	printf("Model: %s. \n", Mybike.model);
	printf("Top Speed: %d. \n", Mybike.topSpeed);
	printf("Year of Manufacture: %d. \n", Mybike.year);
	printf("-------------------------\n");

	return 0;
}
