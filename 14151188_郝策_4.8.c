#include"stdio.h"
int main()
{
	int g;
	printf("Please input grade:\n grade=");
	scanf("%d",&g);
	printf("Your level is ");
	if(g>=90)
	printf("A");
	else if(80<=g<90)
	printf("B");
	else if(70<=g<80)
	printf("C");
	else if(60<=g<70)
	printf("D");
	else if(g<60)
	printf("E");
}
