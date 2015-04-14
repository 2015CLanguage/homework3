#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,h;
	printf("请输入坐标x=?");
	scanf("%f",&x);
	printf("请输入坐标y=?");
	scanf("%f",&y);
	if(pow((x-2),2)+pow((y-2),2)<=1||pow((x+2),2)+pow((y-2),2)<=1||pow((x+2),2)+pow((y+2),2)<=1||pow((x-2),2)+pow((y+2),2)<=1)
	{
		x=float(fabs(x));
		y=float(fabs(y));
		h=float(10-5*sqrt(pow((x-2),2)+pow((y-2),2)));
	}
	else
		h=0;
	printf("建筑物高度为%f\n",h);
	return 0;
}
