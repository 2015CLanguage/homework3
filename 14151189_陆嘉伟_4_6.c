#include<stdio.h>		
int main()
{int x,y;
printf("输入x值：");
scanf("%d",&x);
if(x<1)
	y=x;
else if(x>=10)
	y=3*x-11;
else
	y=2*x-1;
printf("y=%d",y);
return 0;
}
