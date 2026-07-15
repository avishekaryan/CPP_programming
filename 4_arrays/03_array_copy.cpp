//WAP to copy elements of an array into another array.

#include <stdio.h>
int main()
{
	int n  , i,arr[10], b[10];
	printf("Enter no of array: ");
	scanf("%d" , &n);
	printf("Enter numbers: ");
	for(i=0 ; i<n ; i++)
	{
	   scanf("%d", &arr[i]);
	}
	printf("Enterd array numbers are:\t");
	for(i=0 ; i<n ; i++)
	{
			printf("%d" , arr[i]);
	}
	printf("\nNow the copying numbers from arr to b are:\t");
	for(i=0 ; i<n ; i++)
	{
			b[i]=arr[i];
			printf("%d" , b[i]);
	}
	return 0;
}