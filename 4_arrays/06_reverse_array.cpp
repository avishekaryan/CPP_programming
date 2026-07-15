//WAP to display the elements of an array in reverse order.

#include <stdio.h>
int main ()
{
	int n ,i , arr[50];
	printf("Enter number of arrays: ");
	scanf("%d" , &n);
	for(i=0 ; i<n ; i++)
	{
		printf("Enter any numbers: ");
		scanf("%d" , &arr[i]);
	}
	for(i=n-1 ; i>=0 ; i--)
	{printf("%d\n" , arr[i]);} 
	return 0;   
}