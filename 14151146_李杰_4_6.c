#include<stdio.h>
void main()
{
	float x,y;
	printf("请输入X的值\n");
	scanf("%f",&x);
	if(x>=10)
		y=3*x-11;
	else if(x>=1)
		y=2*x-1;
	else
	  y=x;
	printf("y的值为%7.2f\n",y);
}
