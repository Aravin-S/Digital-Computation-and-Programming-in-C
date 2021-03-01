#include <stdio.h>
int main (void)
{
	
//Excercise 2
    printf ("\n\n2)\n");
    FILE *inFile;
    int monthly_water_arr[50], num_months = 0, i = 0, count_arr[] = {0, 0, 0, 0, 0, 0, 0, 0};
    char labels[7][10] = { "71-80", "81-90", "81-100", "101-110", "111-120", "121-130", "131-140" };
	inFile = fopen ("water.dat", "r");

    //a)
    while (fscanf (inFile, "%d", &monthly_water_arr[i]) != EOF)
    {
        num_months++;
        i++;
    }
    fclose(inFile);

    //2b-e)
    for (int j=0; j < num_months; j++)
    {
        if (monthly_water_arr[j] > 131)
            count_arr[6]++;
        else if (monthly_water_arr[j] > 121)
            count_arr[5]++;
        else if (monthly_water_arr[j] > 111)
            count_arr[4]++;
        else if (monthly_water_arr[j] > 101)
            count_arr[3]++;
        else if (monthly_water_arr[j] > 91)
            count_arr[2]++;
        else if (monthly_water_arr[j] > 81)
            count_arr[1]++;
        else if (monthly_water_arr[j] > 71)
            count_arr[0]++;
    }

    //e-g)
    printf ("10 M gals water per day\n");
    for (int k=0; k < 7; k++)
    {
        printf ("%s: %d\n", labels[k], monthly_water_arr[k]);
    }
    
    return (0);
}
    
