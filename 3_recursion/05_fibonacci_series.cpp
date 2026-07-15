//WAP to input n terms and find the fibonacci series upto nth term.

#include <stdio.h>
int main()
{
	int n , f=0 ,s=1 , i , next;         //first and second
	printf("Enter a number: ");
	scanf("%d" , &n);
	printf("Fibonacci series : ");
	for (i=1 ; i<=n ; i++)
	{
		printf("%d\t" , f);
		next=f+s;
		f=s;
		s=next;
		printf("\t");
	}
	return 0;
}