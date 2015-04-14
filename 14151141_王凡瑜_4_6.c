#include<stdio.h>
void main()
{
    float x,y;
	printf("请输入自变量x\n");
	scanf("%f",&x);
	if(x<1)
		y=x;
	if(x>=1 && x<10)
		y=x*2-1;
	if(x>=10)
		y=x*3-11;
    printf("函数值y=%.2f\n",y);
}
