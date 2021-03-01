#include <stdio.h>
#include <math.h>

//Excercise 2
struct strength
{
	float p;
	float d;
	float stress;
	float strain;
};

int
main(void)
{
	struct strength value;
	float area,length;
	printf("Enter the compression load, the diameter of the column and the length of the column\n");
	scanf("%f%f%f",&value.p,&value.d,&length);
	
	area = (3.14159*pow(value.d,2))/4;
	value.stress = value.p/area;
	value.strain = value.stress/(30*pow(10,6));
	
	printf("Therefore the load is: %f\n",value.p);
	printf("Therefore the diameter is: %f\n",value.d);
	printf("Therefore the stress is: %f\n",value.stress);
	printf("Therefore the strain is: %f\n",value.strain);
	return (0);
}

