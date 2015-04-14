#include<stdio.h>
#include<math.h>
int main()
{
float x,y,t;
scanf("%f,%f",&x,&y);
x=fabs(x);
y=fabs(y);
t=(x-2)*(x-2)+(y-2)*(y-2);
if(t<=1)
	printf("h=10m\n");
else
	printf("h=0\n");
return 0;
}
