//array 2 dimensional inpiut

#include <stdio.h>
int main()
{
	int r ,c , i , j;
	printf("Enter no of rows and column: ");
	scanf("%d%d" ,&r,&c);
	int arr[r][c];
	for(i=0 ; i<r ; i++)
	{
	for(j=0 ; j<c ; j++)
	{printf("Enter elements[%d][%d]: " , i , j);
	scanf("%d" ,&arr[i][j]);
	}
	}
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{printf("%d\t" ,arr[i][j]);}
	printf("\n");
    }
	return 0;	
}