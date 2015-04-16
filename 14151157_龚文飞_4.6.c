#include"stdio.h"
void main()
{
	float x,y;
	printf("请输入x的值\n");
	scanf("%f",&x);
	if(x<0)
		y=x;
	else if(x>=1&&x<10)
		y=x*2-1;
	else
		y=x*3-11;
		printf("x=%f,y=%f\n",x,y);
}
