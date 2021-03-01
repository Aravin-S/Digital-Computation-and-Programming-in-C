#include <stdio.h>
//Excercise 1. 
int main(void)
{
//a)
double x_arr[25];

FILE *inFile;
double temp;
int count=0;

inFile = fopen("input.txt","r");

while(!feof(inFile))
{
	fscanf(inFile,"%lf", &temp);
	x_arr[count] = temp;
	count++;
}
fclose(inFile); 

//b) and c)
double xhigh, xlow;
//d)
double x_second_arr[25];
xhigh = x_arr[0];
xlow = x_arr[0];
printf("Entered Values\n");

for(int i=0;i<count;i++)
{
	printf("%.2f\n", x_arr[i]);
	x_second_arr[i] = x_arr[i] * 3;
	if(xhigh < x_arr[i])
	{
	xhigh = x_arr[i];
	}
	if(xlow > x_arr[i])
	{
	xlow = x_arr[i];
	}
}

printf("\nHighest Value is: %.2f\n", xhigh);
printf("Lowest Value is: %.2f\n", xlow);


printf("\nSecond Array Values\n");
for(int i=0;i<count;i++)
{
	printf("%.2f\n", x_second_arr[i]);
}

//e)
double max, min;

printf("\nEnter upper and lower limit\n");
scanf("%lf", &max);
scanf("%lf", &min);
double norm_x_arr[25];

for(int i=0;i<count;i++)
{
	norm_x_arr[i] = min + ((x_arr[i]-xlow) * (max-min))/(xhigh-xlow);
}

	printf("\nValues of the Normalized Array\n");
for(int i=0;i<count;i++)
{
	printf("%.2f\n", norm_x_arr[i]);
}
return (0);
}

