#include <stdio.h>
int
main (void)
{
 /* Excercise 4 */
    float nub;
	printf ("Enter a real number: ");
	scanf ("%f", &nub);
	int hun = ((nub + 50)/100);
	hun*= 100;
	int thou = ((nub + 500)/1000);
	thou*= 1000;
	printf ("The number to the nearest hundredth is %d.\n", hun);
	printf ("The number to the nearest thousandth is %d.\n", thou);
	printf ("The number to the one decimal place is %.1f.\n", nub);
	return
}
