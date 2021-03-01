#include <stdio.h>
#include <math.h>
int
main (void)
{
/* Excercise 5 */
	float longside, shortside, C1, C2, Ct, pi;
	pi = 3.141593;
	printf ("Enter long side value: ");
		scanf ("%f", &longside);
	printf ("Enter short side value: ");
		scanf ("%f", &shortside);
	C1 =(((longside*longside)+(shortside*shortside))/2);
	C2 = sqrt(C1);
	Ct = 2*pi*C2;
	printf ("The value of the circumference of the ellipse is about %f.\n", Ct);
	
   return (0);
}
