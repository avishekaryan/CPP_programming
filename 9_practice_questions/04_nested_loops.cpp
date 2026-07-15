//WAP to find largest number among three numbers using nested if else.

#include <stdio.h>
int main()
{
	int a , b , c ;
	printf("Enter any 3 numbers: ");
	scanf("%d%d%d" , &a ,&b , &c);
	if(a>b)
	{
	    if(a>c)
	    printf("%d is the Greatest no." , a);
	    else
	    printf("%d is the Greatest no." , c);
	}
	else if(b>a)
	{
		if(b>c)
		printf("%d is the Greatest no." , b);
		else
		printf("%d is the Greatest no." , c);
	}
	else
	{
		printf("%d is the Greatest no." , c);
	}
	return 0;
}