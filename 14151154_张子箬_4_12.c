#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,a,b,c,d;
	int z;
	scanf("%lf,%lf",&x,&y);
	a=(x-2)*(x-2)+(y-2)*(y-2);
	b=(x+2)*(x+2)+(y-2)*(y-2);
	c=(x-2)*(x-2)+(y+2)*(y+2);
	d=(x+2)*(x+2)+(y+2)*(y+2);
	if(a<=1||b<=1||c<=1||d<=1)
		z=10;
	else
		z=0;	
    printf("高度为%d\n",z);
    return 0;
}

