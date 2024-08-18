#include<stdio.h>
#include<string.h>
struct mobilephone
{
	char name[50];
	char model[50];
	int year;
	int storage;
	int ram;
	char processor[50];
};

typedef struct mobilephone phoneinfo;

int main()
{
	phoneinfo myphone;

	strcpy(myphone.name, "Motorolla");
	strcpy(myphone.model, "Edge 20 Fusion");
	myphone.year = 2023;
	myphone.storage = 256;
	myphone.ram = 8;
	strcpy(myphone.processor, "Dimensity - 9000 5G - 7nm");

	printf("MY DEVICE INFORMATION: \n");
	printf("---------------------------\n");
	printf("Device Brand: %s. \n", myphone.name);
	printf("Model: %s. \n", myphone.model);
	printf("Storage (ROM): %d GB. \n", myphone.storage);
	printf("RAM: %d GB. \n", myphone.ram);
	printf("Processor (CPU): %s. \n", myphone.processor);
	printf("Year of Manufacture: %d. \n", myphone.year);
	printf("---------------------------\n");

	return 0;
}
