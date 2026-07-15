//WAP to take input and display the count of even and odd numbers in an array.
#include<stdio.h>
int main()
{
	int n ,arr[59];
	int odd_count=0 , even_count=0 ,i;
	printf("Enter no. count: ");
	scanf("%d" ,&n);
	printf("Enter numbers: ");
	for(i=0 ; i<n ; i++)
	{
	scanf("%d" ,&arr[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		if (arr[i]%2==0)
		{even_count++ ;}
		else
		{odd_count++;}
	}
	printf("Even no.: %d" , even_count);
	printf("\nOdd no: %d" , odd_count);
	return 0;
}