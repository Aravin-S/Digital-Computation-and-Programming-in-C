#include <stdio.h>
#include <math.h>
int
main (void)
{
	/* Excercise 6 */
	int val1,val2,val3;
	 
	printf ("Enter three integer values\n");
	scanf ("%d%d%d",&val1,&val2,&val3);
	
	printf("The integer values in descending order are: ");
	if (val1>val2 && val1>val3)
	{
		printf("%d ", val1);
		if (val2>val3)
		{
			printf("%d %d\n", val2,val3);
		}
		else
		{
			printf("%d %d\n", val3,val2);
		}
	}
	else if (val2>val1 && val2>val3)
	{
		printf("%d ", val2);
		if(val1>val3)
		{
			printf("%d %d\n",val1,val3);
		}
		else 
		{
			printf("%d %d\n",val3,val1);
		}
	}
	else
	{
		printf("%d ",val3);
		if(val1>val2)
		{
			
			printf("%d %d\n",val1,val2);
		}
		else
		{
			printf("%d %d\n",val2,val1);
		}
	
	return(0);
	
}
}
