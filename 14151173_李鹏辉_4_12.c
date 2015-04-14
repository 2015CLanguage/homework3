#include <stdio.h>
void main()
{
	float x,y,a,b,c,d;
	int h;
	scanf("%f %f",&x,&y);
	a=(x-2)*(x-2)+(y-2)*(y-2);
	b=(x+2)*(x+2)+(y-2)*(y-2);
	c=(x+2)*(x+2)+(y+2)*(y+2);
	d=(x-2)*(x-2)+(y+2)*(y+2);
	if(a<=1||b<=1||c<=1||d<=1)
		h=10;
	else
		h=0;
	printf("h=%d\n",h);
}
