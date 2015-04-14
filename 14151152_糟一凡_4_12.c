#include"stdio.h"
#include"math.h"
int main()
{
	float x,y,a,b,c,d;
	int h;
	printf("x=");
	scanf("%f",&x);
    printf("y=");
	scanf("%f",&y);
	a=pow((x-2),2)+pow((y-2),2);
    b=pow((x+2),2)+pow((y-2),2);
    c=pow((x+2),2)+pow((y+2),2);
    d=pow((x-2),2)+pow((y+2),2);
    if(a<=1||b<=1||c<=1||d<=1)
	{
		h=10;
	}
	else
	{
		h=0;
	}
	printf("h=%d\n",h);
	return 0;
}
