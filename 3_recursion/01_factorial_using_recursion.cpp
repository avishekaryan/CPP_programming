// WAP to input a no and find factorial of it using recursive function.

#include <stdio.h>

int fact( int n);

int main()
{
	int num;
	printf("Enter any no.: ");
	scanf("%d" , &num);
	printf("Factorial of entered no is %d" ,fact(num));
	return 0;
}

int fact( int n)
{
	if( n==0 || n==1 )
	{
		return 1;
	}
	else 
	{
		return n*fact(n-1);
	}
}