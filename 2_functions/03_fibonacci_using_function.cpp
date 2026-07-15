// WAP to input nth term of fibonacci series using function.

#include <stdio.h>
int fibo(int n);

int main()
{
	int num , i;
	printf("Enter any no. : ");
	scanf("%d" , &num);
	printf("Fibonacci series of %d :\n " , num);
    fibo( num );
	return 0;                                    
}

int fibo( int n)
{
	int i , a=0 , b=1 , next;
	printf("%d \t%d" , a ,b);
	for(i=3 ; i<=n ; i++)
	{	
	    next=a+b;
	    printf("\t%d" , next);
	    a=b;
	    b=next; 
	}
	return next;
}