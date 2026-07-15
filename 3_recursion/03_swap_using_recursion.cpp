// WAP to swap to variable using function.

#include <stdio.h>
int swap( int *a , int *b);

int main()
{
	int c , d ; 
	printf("Enter any 2 numbers c and d: ");
	scanf("%d %d" , &c ,&d);
	swap( &c, &d);
	printf("Value after swapping c=%d and d=%d" , c , d);
  	return 0;
}

int swap( int *a ,int *b)
{   int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}