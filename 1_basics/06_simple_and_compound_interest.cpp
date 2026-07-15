//WAP to calculate simple interest.

#include <stdio.h>
#include <math.h>
int main()
{
	int P , T , R , SI;
	int CI;
	printf("Enter principle: ");
	scanf("%d" , &P);
	printf("Enter time: ");
	scanf("%d" , &T);
	printf("Enter rate: ");
	scanf("%d" , &R);
	SI = (P*T*R)/100;
	printf("SI = %d" , SI);
	 
	CI = P*pow(1+(R/100),T);
	printf("\nCI= %d" , CI);
	return 0;
}