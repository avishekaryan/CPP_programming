//WAP TO input 'n' array and display maximum and minimum number.

#include <stdio.h>
 
int main()
{
	int i ,n , a[100];
	int min ,max ;
	printf("Enter no. of count: ");
	scanf("%d", &n);
	printf("Enter numbers: ");
	for(i=0 ; i<n; i++)
	{
	 scanf("%d" , &a[i]);
    }
	for(i=0 ; i<n ; i++)
	{if (a[i]< min)
	   {min=a[i];}
	}
	for (i=0 ; i<n ; i++)
	{if (a[i]>max)
	    {max=a[i];}
	}
	printf("Maximum no : %d\n" , max);
	printf("Minimum no : %d\n" , min);
	return 0;
}