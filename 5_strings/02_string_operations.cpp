//wap in c to take input as a string from the user and display it.

#include <stdio.h>
#include <string.h>

int main()
{
	char name[100];
	printf("Enter your desired name: ");
	scanf(" %[^\n]s" , name);
	printf("%s is the desired name", name);
	return 0;
}