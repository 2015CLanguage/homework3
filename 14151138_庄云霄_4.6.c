#include<stdio.h>
void main()
{
	float x,y;
	printf("please input a x");

	scanf("%f",&x);
	if (x<1)
		y=x;
	else if(x>=1&x<10)
		y=2*x-1;
	else
		y=3*x-11;
	printf("the answer is : %f",y);
}
