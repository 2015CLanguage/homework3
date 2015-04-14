#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,a,b,c,d;
	int h;
	printf("请输入坐标");
	scanf("%f,%f",&x,&y);
	a=sqrt(pow(x-2,2)+pow(y-2,2));
	b=sqrt(pow(x+2,2)+pow(y-2,2));
	c=sqrt(pow(x-2,2)+pow(y+2,2));
	d=sqrt(pow(x+2,2)+pow(y+2,2));
	if(a>1&&b>1&&c>1&&d>1)
		h=0;
	else
		h=10;
	printf("该点建筑高度为%d m\n",h);
	return 0;
}
