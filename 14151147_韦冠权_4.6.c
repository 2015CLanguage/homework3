#include<stdio.h>
int main()
{
	float x,y;
	printf("输入x的数值：");
	scanf("%f",&x);
	if(x<1)
		y=x;
	else if(x<10)
		y=2*x-1;
	else
		y=3*x-11;
	printf("x=%f时，y=%f\n",x,y);
	return 0;
}
