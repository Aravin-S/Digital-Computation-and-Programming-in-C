#include <stdio.h>

/*
//a)
int 
main (void)
{
	int value;
		do
		{
		printf("Enter a number between 10 and 99\n");
		scanf("%d",&value);
		}while((value<10)||(value>99));
	return (0);
}
	
	
//b)
int 
main (void)
{
	int value = 59;
	value = value/10;
	printf ("Therefore this value divided by 10 is: %d\n",value);
	return (0);
}
	
//c)
int 
main (void)
	{
	int value = 59;
	value = value%10;
	printf ("Therefore the remainder of this value divided by 10 is: %d\n",value);
	
	return (0);
}
	
	//d)
	
int 
f1 (int y)
{
	return y/10;
		
}
int 
main (void)
{
	int x = 73;
	printf("Original number is %d\n",x);
	printf("Number of 10's in %d = %d\n",x,f1(x));
	return (0);
}
	
//e)
int 
f2 (int y)
{
		return y%10;
}
int 
main (void)
{
		int x = 69;
		printf("Original number is %d\n",x);
		printf("Remainder when %d is divided by 10 is %d\n",x,f2(x));
		return (0);
}
	
//1f/g/h
	
void f3 (int* x_address)
{
	*x_address = *x_address + 4;
}
	
int 
main (void)
{
	int x =69;
	int* x_ptr = &x;
	
	printf("Original number was %d\n",x);
	f3(x_ptr);
	printf ("The value of x after f3 is %d\n", x);
	return(0);
}
	
*/	
//i)
	
void
f4 (int y, int* addr1, int* addr2)
{
	*addr1 = y/10;
	*addr2 = y%10;
}
int 
main (void)
{
	int value,num_of_tens, remainder;
	do
	{
		printf("Enter a number between 10 and 99\n");
		scanf("%d",&value);
	}while((value<10)||(value>99));
	
	//1l)
	
	
	f4 (value, &num_of_tens, &remainder);
	
	printf ("Original number was: %d\n%d has %d 10's \nRemainder when %d is divided by 10 is %d",value, value, num_of_tens, value, remainder);
	
	return(0);
}

