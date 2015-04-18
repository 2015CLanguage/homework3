#include<stdio.h>
int main()
{
	int x,y;
	printf("请输入一个X值：");
	scanf("%d",&x);
	if(x<1)
		y=x;
	else
		if(x<10)
	        y=2*x-1;
	    else
			y=3*x-11;
	printf("y=%d",y);
	return 0;
}
