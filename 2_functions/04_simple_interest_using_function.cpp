// Simple interestusing function.

#include <stdio.h>
 float si( float p, float t , float r)
 {
 	float si= p*t*r ;
 	return si;
 }
 int main()
 {
 	printf("%f" , si(1000.2, 20.8 , 19.7));
 	return 0;
 }