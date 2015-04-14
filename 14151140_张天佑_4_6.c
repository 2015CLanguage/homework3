#include<stdio.h>
void main()
{
	printf("请输入x的值\n");          //输入x的值
	float x,y;
	scanf("%f",&x);
	if(x<1)                          //判断范围计算分段函数，并输出结果
	{
		y=x;
		printf("y的值为%f\n",y);
	}
	if(x>=10)
	{
		y=3*x-11;
		printf("y的值为%f\n",y);
	}
	else
	{
		y=2*x-1;
		printf("y的值为%f\n",y);
	}
}
