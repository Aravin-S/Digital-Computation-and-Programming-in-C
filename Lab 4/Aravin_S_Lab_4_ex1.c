#include <stdio.h>

int main(void)
{
	/*Excercise 1 */
   int a1, a2, t1, t2;
  double avg;
  char grade;

   do
   {
	   printf("Enter two Assignment Grades:\n");
	   scanf ("%d%d",&a1,&a2);
	   printf("Enter two Test Grades: \n");
	   scanf ("%d%d",&t1,&t2);
	   
   }while ((a1 < 0 || a1 > 100) || (a2 < 0 || a2 > 100) || (t1 < 0 || t1 > 100) || (t2 < 0 || t2 > 100)); 
   
   printf("Assignment Grades: %d %d\nTest Grades: %d %d\n",a1,a2,t1,t2);
   avg = (a1 + a2 + t1 + t2)/4.0;
   printf("The Average is: %.lf\n",avg);
     if(avg>=80)
            grade = 'A';
        else if(avg<80 && avg>=70)
            grade = 'B';
        else if(avg<70 && avg>=60)
             grade = 'C';
        else if(avg<60 && avg>=50)
             grade = 'D';
        else
             grade = 'F';
            
    printf("The Letter Grade is: %c",grade);
    return 0;
}

