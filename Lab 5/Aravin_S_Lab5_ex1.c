#include <stdio.h>

int main(void)
{
 /*Excercise 1*/
 //a.
 
	int temp;
	scanf("%d",&temp);
	printf("The number entered was: %d\n",temp);
	
 //b.
 for (int i = 1; i <= 5; i++)
	{
		printf ("Enter number #%d: ", i);
		scanf ("%d", &temp);
		printf ("You entered: %d\n", temp);
	}
//c.
int b_num,num_samples,num_orgs_per_100;
printf("Enter the beach number, number of samples and number of organisms per 100 mL of water\n");
scanf("%d%d%d",&b_num,&num_samples,&num_orgs_per_100);
printf("Beach Number: %d\nNumber of Samples: %d\nNumber of Organisms per 100 mL of Water: %d\n",b_num,num_samples,num_orgs_per_100);

//d.
printf("Enter the number of samples\n");
scanf ("%d", &num_samples);
int val;
for(int i =0;i < num_samples;i++)

    {
    printf("\nEnter the sample value #%d:", i+1);

    scanf("%d",&val);

    printf("Entered value is:%d",val);

    }
//e.
printf("\nEnter the number of samples\n");
scanf ("%d", &num_samples);

for(int i =0;i < num_samples;i++)

    {
    printf("\nEnter the number of organisms per 100 mL of water in sample#%d:", i+1);

    scanf("%d",&num_orgs_per_100);

    printf("Entered value is:%d",num_orgs_per_100);

    }
//f. Introduction of the data file

//g. and h.
	
	FILE *in;
	in = fopen("data5s.txt", "r");
	fscanf (in, "%d", &b_num);
	while (b_num > 0)
	{
		printf ("%d:", b_num);
		fscanf (in, "%d", &num_samples);
		for (int i = 0; i < num_samples; i++)
		{
			fscanf (in, "%d", &num_orgs_per_100);
			printf ("%d ", num_orgs_per_100);
		}
		printf ("\n");
		(fscanf (in, "%d", &b_num));
	}
	fclose (in);
//i. and j.
in = fopen("data5s.txt", "r");											
	int total, average;
	
	fscanf (in, "%d", &b_num);
	while (b_num > 0)													
	{
		total = 0;
		average = 0;
		
		printf ("%d:", b_num);
		fscanf (in, "%d", &num_samples);
		for (int i = 0; i < num_samples; i++)
		{
			fscanf (in, "%d", &num_orgs_per_100);
			total = total + num_orgs_per_100;
		}
		average = total/num_samples;
		printf (" Average of %d organisms per 100 mL.", average);
		if (average < 3500)
			printf (" This beach is safe and open\n");
		else
			printf (" This beach is not safe and closed\n");
			
		fscanf (in, "%d", &b_num);
	}
	fclose (in);
//k. and Excercise 2	
in = fopen("erie.txt", "r");										
	int total_num_beaches = 0, open = 0, closed = 0;
	
	while ( (fscanf (in, "%d", &b_num)) != EOF)
	{
		total = 0;
		average = 0;
		total_num_beaches++;
		
		printf ("%d:", b_num);
		fscanf (in, "%d", &num_samples);
		if (num_samples != 0)												
		{
			for (int i = 0; i < num_samples; i++)
			{
				fscanf (in, "%d", &num_orgs_per_100);
				total = total + num_orgs_per_100;
			}
			average = total/num_samples;
			printf (" Average of %d organisms per 100 mL.", average);
		
			//Excercise 2
			if (average < 3500)
			{
				printf (" This beach is safe and open\n");
				open = open+1;
			}
			else
			{
				printf (" This beach is not safe and closed\n");
				closed = closed+1;
			}
		}
		else
		{
			printf (" No samples were taken from this beach.\n");				
		}
	}
	fclose (in);

	printf ("\nThere are %d beaches, %d are open and %d are closed.", total_num_beaches, open, closed);

return 0;
}
