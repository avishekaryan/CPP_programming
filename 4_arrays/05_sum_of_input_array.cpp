//WAP input and display sum of elements in an array.

#include <stdio.h>
int main()
{
	int s , n , i , a[100];
	printf("How many numbers of array you want to sum: ");
	scanf("%d" , &n);
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the number: ");
		scanf("%d" , &a[i]);
		s=s+a[i];
	}
	printf("%d is the sum of array" ,s );
	return 0;
}