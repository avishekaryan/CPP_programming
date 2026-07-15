//WAP to find factorial of any number.

#include <stdio.h>
int main()
{
	int n , fact=1 , i ;
	printf("Enter any no.= ");
	scanf("%d" , &n);
	for(i=1 ; i<=n ; i++)
	{
		fact *= i;
	}
	printf("The factorial of %d is %d" , n ,fact);
	return 0;
}