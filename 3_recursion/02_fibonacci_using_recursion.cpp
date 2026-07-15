// WAP to input a no and find fibonacci series upto nth term using recursive function.

# include <stdio.h>

int fibo( int n);

int main()
{
	int i ,num;
	printf("Enter any no. : ");
	scanf("%d" , &num);
	printf("Fibonacci series:  ");
    for(i=0 ; i<num ; i++)
	 {printf("\t%d" , fibo(i));}
	return 0;
}

int fibo( int n)
{
	if(n==0)
	{return 0;}
	else if(n==1)
	{return 1;}
	else
	{return fibo(n-2)+fibo(n-1);}
}