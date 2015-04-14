#include<stdio.h>
int main()
{
int a,b;
printf("x=");
scanf("%d",&a);
if (a<1)
	b=a;
	else if (a<10)
		b=2*a-1;
	else	
		b=3*a-11;
printf("y=%d\n",b);
return 0;
}
