#include"stdio.h"
int main()
{
	float x,y;
	printf("输入x");
	scanf("%f",&x);
	if(x<1) y=x;
	else
		if(x>=1&&x<10) y=2*x-1;
		else y=3*x-11;
	printf("y=%f\n",y);
	return 0;
}
