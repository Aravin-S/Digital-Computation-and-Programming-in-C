#include <stdio.h>
#include <math.h>

//Excercise 1
struct shape
{
	float line;
	float radius;
	float areacircle;
	float areacylinder;
	float volumecylinder;
	
};

int
main(void)
{
	struct shape value;
	printf("Enter the lenght of the axis\n");
	scanf("%f",&value.line);
	
	printf("Enter radius\n");
	scanf("%f",&value.radius);
	
	value.areacircle = 3.14159*(pow(value.radius,2));
	value.areacylinder = 2*3.14159*value.radius*value.line + 2*3.14159*(pow(value.radius,2));
	value.volumecylinder = 3.14159*value.line*(pow(value.radius,2));
	
	printf("Area of the circle is %.2lf\n",value.areacircle);
	printf("Area of the cylinder is %.2lf\n",value.areacylinder);
	printf("Volume of the cylinder is %.2lf\n",value.volumecylinder );
	
	return (0);
}
