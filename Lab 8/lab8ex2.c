#include <stdio.h>
#include <malloc.h>
//Excercise 2
int count_negs (int arr[], int size);

int count_zeros(int arr[], int size)
{
	int count1=0,i;
		for (i=0; i<size; i++)
		{
			if (arr[i]==0)
			{
				count1++;
			}
		}
	printf ("\nNumber of zero elements: %d", count1);
	return count1;
}
int count_negs (int arr[], int size)
{
	int count2=0,i;
		for (i=0; i<size; i++)
		{
			if (arr[i]<0)
			{
				count2++;
			}
		}
	printf ("\nNumber of negative elements: %d", count2);
	return count2;
}
int 
main(void)
{
	int *arr, i, how_many;
	
	FILE* in;
	in = fopen("Data1.txt","r");
	
	fscanf (in,"%d", &how_many);
	
	arr = calloc(how_many,sizeof(int));
	
		for (i=0; i<how_many; i++)
		{
			fscanf(in,"%d",&arr[i]);
		}
	
		for (i=0; i<how_many; i++)
		{
			printf ("%d\n",arr[i]);
		}
	
	count_zeros(arr,how_many);
	count_negs(arr,how_many);
	
	free(arr);
	
	fclose(in);
	return 0;
}
