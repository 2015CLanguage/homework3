#include"stdio.h"
#include"math.h"
int main()
{
	int x,y;
	printf("请输入坐标\n");
	printf("x=");
	scanf("%d",&x);
	printf("y=");
	scanf("%d",&y);
	if(pow((fabs(x)-2),2)+pow((fabs(y)-2),2)<=1)
	printf("Height is 10");
	else printf("Height is 0");
} 
