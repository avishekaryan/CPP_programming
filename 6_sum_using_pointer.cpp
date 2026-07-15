//WAP to add any two number using pointer.

#include <stdio.h>
int main()
{
	int a , b , sum ;
	int *p , *q;
	printf("Enter 1st and 2nd no. = ");
	scanf("%d%d" , &a , &b );
	p=&a;
	q=&b;
	sum = *p +*q;
	printf("Sum is %d" , sum);
	return 0;
}