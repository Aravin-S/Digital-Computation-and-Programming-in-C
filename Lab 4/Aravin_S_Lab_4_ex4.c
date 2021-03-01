#include <stdio.h>

int main(void)
{
	/*Excercise 4 */
	 double n;
	printf("Enter a Richter Scale number\n");
	scanf("%lf",&n);
	 if(n>=7.5)
           printf("Catastrophe: Most buildings destroyed\n");
        else if(n<7.5 && n>=6.5)
            printf("Disaster: Houses and buildings may collapse\n");
        else if(n<6.5 && n>=5.5)
            printf("Serious Damage: Walls may crack or fall\n");
        else if(n<5.5 && n>=5.0)
            printf("Some damage\n");
        else
         printf("Little or no damage\n");
         
         printf("No, we cannot write this code using switch statements because they cannot work with double values and conditions.");
    return 0;
}

