#include <stdio.h>
#include <math.h>

int main()
{
	float x,y,h;
	printf("请依次输入点的横纵坐标:\n");
	scanf("%f,%f",&x,&y);
	if(((x-2)*(x-2)+(y-2)*(y-2)<=1)||((x+2)*(x+2)+(y-2)*(y-2)<=1))
		h=10;
	else if(((x+2)*(x+2)+(y+2)*(y+2)<=1)||((x+2)*(x-2)+(y+2)*(y+2)<=1))
		h=10;
	else
		h=0;
	printf("该点的建筑高度为%6.1f米\n",h);
	return 0;
}
