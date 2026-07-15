//WAP to display the count of even and odd numbers in an array.
#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int odd_count=0 , even_count=0 , i;
	for(i=0 ; i<10 ; i++)
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