// WAP to input 2 numbers from user and find the sum using function.

#include <stdio.h>
int sum(int a , int b);

int main()
{
	int n1,n2,result;
	printf("enter any numbers: ");
	scanf("%d%d" , &n1 ,&n2);
	result= sum(n1 , n2);
	printf("sum= %d\n" , result);
	return 0;
}
int sum( int a , int b)
{
	return a+b ;
}