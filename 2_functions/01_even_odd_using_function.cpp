//WAP to find even or odd using funtion.

#include <stdio.h>
int even_odd( int num);

int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d" , &n);
	even_odd( n );
	return 0;
}

int even_odd( int num )
{
	if(num%2 == 0)
	{
		printf("Entered number is even");
	}
	else
	{
		printf("Entered number is odd");
	}
}