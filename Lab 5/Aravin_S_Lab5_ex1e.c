#include <stdio.h>

int main(void)
{
	int num_samples,num_orgs_per_100;
printf("Enter the number of samples\n");
scanf ("%d", &num_samples);

for(int i =0;i < num_samples;i++)

    {
    printf("\nEnter the number of organisms per 100ml of water in sample#%d:", i+1);

    scanf("%d",&num_orgs_per_100);

    printf("Entered value is:%d",num_orgs_per_100);

    }
	return (0);
}

