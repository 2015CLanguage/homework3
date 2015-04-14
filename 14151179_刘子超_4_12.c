#include<stdio.h>
#include<math.h>
void main()
{
	int x,y,h,a,b,c,d;
	scanf("%f,%f",&x,&y);
	h=0;
	a=pow(x-2,2)+pow(y-2,2);
	b=pow(x-2,2)+pow(y+2,2);
	c=pow(x+2,2)+pow(y-2,2);
	d=pow(x+2,2)+pow(y+2,2);
	if(a<=1)
		h=10;
	if(b<=1)
		h=10;
	if(c<=1)
	  h=10;
	if(b<=1)
		h=10;
	printf("%d",h);
}
