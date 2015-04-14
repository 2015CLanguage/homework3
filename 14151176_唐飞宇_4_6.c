# include <stdio.h>
int main(void)
{
   double x,y;
	
	printf("输入x的值：");

	scanf("%lf",&x);
	
	if (x<1)
		y=x;
	else if(x>=1&&x<10)
		y=2*x-1;
	else 
		y=3*x-11;

	printf("对应的y值为：%lf\n",y);

	return 0;
