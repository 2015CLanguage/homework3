#include<stdio.h>
int main()
{
float a,b,c,t;
scanf("%f,%f,%f",&a,&b,&c);
	if(a>b)
		t=a;
	else t=b;

	if(t>c)
		t=t;
	else
		t=c;
printf("%5.2f\n",t);
return 0;
}
