// WAP to input a number and find weather its positive, negative or zero.

#include <stdio.h>
int main()
{
	int n;
	printf("Enter any no you desireed.: ");
	scanf("%d" , &n);
	if(n<0)
	{printf("%d is the negative no. ", n);}
	else if (n>0)
	{printf("%d is the positive no. ", n);}
	else
	{printf("%d is the Zero" , n);}
	return 0;
}