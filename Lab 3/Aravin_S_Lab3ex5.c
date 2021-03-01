#include <stdio.h>
#include <math.h>
int
main (void)
{
	/* Excercise 5 */
	int val1,val2,sum;
	 
	printf ("Enter two integer values\n");
	scanf ("%d%d",&val1,&val2);
	sum = val1 + val2;
	if (val1 == val2)
	{
		sum = sum*3;
		printf ("The triple of the sum is %d",sum);
	
	}
	else 
	
	{
	printf("The sum is %d", sum);
	
    }


	
	return(0);
	
}
