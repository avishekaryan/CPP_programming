//WAP TO TAKE INPUT FROM USER AND FIND THE LARGEST NUMNER AMONG 3 NO.s.

#include <stdio.h>
int main()
{
	int a , b , c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d" ,&a , &b ,&c);
	if(a>b && a>c)
	{printf("%d is the Greatest no." , a);}
	else if(b>c && b>a)
	{printf("%d is the Greatest no." , b);}
	else
	{printf("%d is the Greatest no." ,c);}
	return 0;
}