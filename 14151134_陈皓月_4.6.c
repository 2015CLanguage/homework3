#include<stdio.h>
int main()
{
	float x,y;
	printf("请输入x\n");
	scanf("%f",&x);//输入x值
	if(x<1)  //确定x范围
		y=x;
	else 
		if(x>=1 && x<10)
			y=2*x-1;
		else
			y=3*x-11;
	printf("函数值y=%.2f\n",y);//输出y
	return 0;
}
