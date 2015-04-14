#include <stdio.h>
int main()
{
	float x,y;         //申请浮点型变量
	printf("请输入x:\n");
	scanf("%f",&x);//输入x的值
	if(x<1)   //计算不同情况下y值
		y=x;
	else
	{
		if(x>=10)
			y=3*x-11;
		else  
			y=2*x-1;
	}
	printf("y的值为%f\n",y);//按浮点型变量输出y
	return 0;
}
