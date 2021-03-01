#include <stdio.h>
//Excercise 1
int checkdiag(int[][100], int);
int main()
{
	FILE*in;
	in=fopen("matrix1.txt","r");
	int size,check;
	fscanf(in,"%d",&size);
	int matrix [size][100];
	
	
	for (int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			fscanf (in,"%d", &matrix[i][j]);
			
		}
		
	}
	
	check = checkdiag (matrix,size);
	if (check == 1)
	printf("The matrix was %d by %d, the values of the diagonal were all the same.",size,size);
	else if (check == 0)
	printf("The matrix was  %d by %d, the values of the diagonal were not all the same.",size,size);
	return (0);
	
}

int checkdiag(int matrix[][100], int size)
{
	int check;
	for (int i = 1; i < size; i++)
	{
		if (matrix[0][0] !=matrix[i][i])
		{
			check = 0;
			break;
		}
		else
		{
			check = 1;
			continue;
		}
	}
	return (check);
}

