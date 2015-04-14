#include<stdio.h>
int main()
{
	float x,y;
	printf("请输入x的值:");
	scanf("%f",&x);
	if(x<1)
		printf("y=%.2f\n",x);
	else if(x<10)
	{
			y=2*x-1;
			printf("y=%.2f\n",y);
	}
	else
	{
			y=3*x-11;
			printf("y=%.2f\n",y);
	}	
	return 0;
}
