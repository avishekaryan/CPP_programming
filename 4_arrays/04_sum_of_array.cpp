//WAP to display sum of elements in an array.
#include <stdio.h>

int main()
{
	int s, i ,a[10]={1,2,3,4,5,6,7,8,9,10};
	for(i=0 ; i<10 ; i++)
	{
		s=s+a[i];
	}
	printf("\n%d is the sum of elements" , s);
	return 0;
}