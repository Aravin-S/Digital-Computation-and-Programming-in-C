#include <stdio.h>
#include <math.h>
#define PI 3.1416
int
main (void)
{
	/* Excercise 3 */
	double radius,volume;
	 
	printf ("Enter a radius\n");
	scanf ("%lf",&radius);
	volume = (4.0/3.0)*(PI)*(pow(radius,3));
	printf ("The volume of the sphere is %.2lf\n",volume);
	
	
	return(0);
	
}
