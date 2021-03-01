#include <stdio.h>
#include <math.h>
int
main (void)
{
	/* Excercise 2 */
	
	 printf("%-5s  %-10s  %-14s\n","Meter", "Yard","Mile");
    double m100 = 100, m200 = 200, m400 = 400, m800 = 800, yard, mile;
    yard = m100 / 1.094;
    mile = m100 / 0.0006215;    
    
    printf("%.1lf  %-10.2lf  %-14.2lf\n", m100, yard, mile);
    
    yard = m200 / 1.094; mile = m200 / 0.0006215;
    printf("%.1lf  %-10.2lf  %-14.2lf\n", m200, yard, mile);
    
    yard = m400 / 1.094; mile = m400 / 0.0006215;
    printf("%.1lf  %-10.2lf  %-14.2lf\n", m400, yard, mile);
    
    yard = m800 / 1.094; mile = m800 / 0.0006215;
    printf("%.1f  %-10.2lf  %-14.2lf\n", m800, yard, mile);
    return(0);
	
}
