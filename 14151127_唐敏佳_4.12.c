#include "stdio.h"
#include "math.h"

int main()
{
	float x,y,d1,d2,d3,d4,h;
	printf("请输入任一点的坐标x和y：\n");
	scanf("%f,%f",&x,&y);
	d1=pow((pow((x-2),2),pow((y-2),2)),1/2);
	d2=pow((pow((x+2),2),pow((y-2),2)),1/2);
	d3=pow((pow((x+2),2),pow((y+2),2)),1/2);
	d4=pow((pow((x-2),2),pow((y+2),2)),1/2);
	if(d1>1 && d2>1 && d3>1 && d4>1)
		h=0;
	else h=10;
	printf("该点建筑高度h=%d\n",h);
	return 0;
}
