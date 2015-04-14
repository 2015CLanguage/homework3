#include <stdio.h>

void main()
{
	printf("请输入自变量x:");
	float x,y;
	scanf("%f",&x);
	if(x<1) y=x;
	if(x>=1&&x<10) y=2*x-1;
	else y=3*x-11;
	printf("y=%f\n",y);
}
