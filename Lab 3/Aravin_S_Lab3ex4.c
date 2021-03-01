#include <stdio.h>
#include <math.h>
int
main (void)
{
	/* Excercise 4 */
	double ang1,ang2,ang3;
	 
	printf ("Enter two angles in a triangle\n");
	scanf ("%lf%lf",&ang1,&ang2);
	ang3 = 180.0 - ang1 - ang2;
	printf ("The remaining angle is %.2lf\n",ang3);
	
	
	return(0);
	
}
