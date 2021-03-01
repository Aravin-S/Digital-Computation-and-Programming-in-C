#include <stdio.h>
#include <math.h>
int
main (void)
{
	/* Excercise 1 */
   printf ("This \nis \nmy \nfirst \nC \nprogram.\n");
   /* Excercise 2 */
   printf ("\nX O X\nX X O\nO O X\n");
   /* Excercise 4 */
    float nub;
	printf ("Enter a real number: ");
	scanf ("%f", &nub);
	int R100 = ((nub + 50)/100);
	R100*= 100;
	int R1000 = ((nub + 500)/1000);
	R1000 *= 1000;
	printf ("The number to the nearest hundredth is %d.\n", R100);
	printf ("The number to the nearest thousandth is %d.\n", R1000);
	printf ("The number to the one decimal place is %.1f.\n", nub);
	
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
