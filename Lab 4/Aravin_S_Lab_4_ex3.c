#include <stdio.h>

int main(void)
{
	/*Excercise 3 */
	 char war;
   printf("Enter warship class:");
    scanf("%c",&war);
    switch(war)
    {
        case 'S':
        case 's':
            printf("Submarine\n");
            break;
        case 'C':
        case 'c':
            printf("Cruiser\n");
            break;
        case 'D':
        case 'd':
            printf("Destroyer\n");
            break;
        case 'F':
        case 'f':
            printf("Frigate\n");
            break;
        case 'A':
        case 'a':
            printf("Aircraft Carrier\n");
            break;
        default:
            printf("Ship is unknown\n");
	}
    return 0;
}

