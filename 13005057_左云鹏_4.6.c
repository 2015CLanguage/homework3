#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入自变量x值:");//接收输入
	scanf("%d",&x);
	if(x<1)//if语句划分自变量范围
	{y=x;
	printf("x=%d,y=x=%d\n",x,y);//计算并打印输出
	}
	else if(x<10)
	{
		y=2*x-1;
		printf("x=%d,y=2*x-1=%d\n",x,y);
	}
	else
	{
		y=3*x-11;
		printf("x=%d,y=3*x-11=%d\n",x,y);

	}
	return 0;
}
