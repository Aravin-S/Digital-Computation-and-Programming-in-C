#include <stdio.h>
#include <math.h>
void main()
{
	struct gospel
	{
		int num;
		char mess1[50];
		char mess2[50];
	}m;
	
	m.num =1;
	strcpy(m.mess1,"If all that you have is hammer");
	strcpy(m.mess2,"Everything looks like nail");
	printf("\n%u %u %u",&m.num,&m.mess1,&m.mess2);
}
