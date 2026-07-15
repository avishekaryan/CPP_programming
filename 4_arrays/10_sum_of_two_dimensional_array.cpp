// sum of 2 dim input matrix 
//array 2 dimensional inpiut 
#include <stdio.h>
int main()
{   
	int r ,c , i , j;
	int A[100][20] , B[100][20] ,s[100][100];
	printf("Enter no of rows and column: ");
	scanf("%d%d" ,&r,&c);
	int arr[r][c];
	for(i=0 ; i<r ; i++)
	{
	for(j=0 ; j<c ; j++)
	{printf("Enter elements[%d][%d]: " , i , j);
	scanf("%d" , &A[i][j]);
	}
	}
	for(i=0 ; i<r ; i++)
	{
	for(j=0 ; j<c ; j++)
	{printf("Enter elements[%d][%d]: " , i , j);
	scanf("%d" ,&B[i][j]);
	}
	}
	for(i=0 ; i<r ; i++)
	{
		for(j=0 ; j<c ; j++)
		{
		s[i][j]= A[i][j] + B[i][j];
		printf("%d\t" ,s[i][j]);
		}
	printf("\n");
    }
	return 0;	
}