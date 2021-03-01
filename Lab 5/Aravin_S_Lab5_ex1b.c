#include <stdio.h>

int main(void)
{
	int temp;
	for (int i = 1; i <= 5; i++)
	{
		printf ("Enter number #%d: ", i);
		scanf ("%d", &temp);
		printf ("You entered: %d\n", temp);
	}
	return (0);
}

