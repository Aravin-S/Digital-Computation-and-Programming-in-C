#include <stdio.h>

int main(void)
{
	int num_samples,val;
printf("Enter the number of samples\n");
scanf ("%d", &num_samples);
for(int i =0;i < num_samples;i++)

    {
    printf("\nEnter the sample value #%d:", i+1);

    scanf("%d",&val);

    printf("Entered value is:%d",val);

    }
	return (0);
}

