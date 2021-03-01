#include <stdio.h>
#include <math.h>
int
main (void)
{
	/* Excercise 1 */
	int num1, num2, num3, num4;
	 
	printf ("Enter 4 numbers\n");
	scanf ("%d%d%d%d", &num1, &num2, &num3, &num4);
	
	printf ("Sum of all 4 numbers: %d\n",num1 + num2 + num3 + num4);
	printf ("Sum of first 2 numbers minus the sum of the last two: %d\n",(num1 + num2) - (num3 + num4));
	
	double sumsquare,sumroot;
	
	sumsquare = pow(num1,2) + pow(num2,2) + pow(num3, 2) +pow(num4,2);
	sumroot = (sqrt(sumsquare))/(num1 + num2 + num3 + num4);
	
	printf ("Sum of the squares of all 4 numbers: %.lf\n",sumsquare);
	printf ("Exact quotient of the square root of the sum of the squares of the numbers divided by the sum of numbers: %.2lf\n",sumroot);
	
	return(0);
	
}
