//WAP to input a no and find factorial of n number using function.

#include<stdio.h>
int fact(int n);

int main()
{
	int num;
	printf("Enter any no.: ");
	scanf("%d" , &num);
	if(num<0)
	{
		printf("%d is negative number i.e not defined for factorial" , num);
		printf(" \nbecause Factorial of -ve no is Undefined.");
	}
	else
	{
		printf("Factorial of %d is %d" , num , fact(num));
	}
	return 0;
}

int fact(int n)
{
	int f=1;
	int i;
	for(i=1 ; i<=n ; i++)
	{
		f *=i;
	}
	return f;
}
