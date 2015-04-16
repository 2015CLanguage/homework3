#include"stdio.h"
void main()
{
	float x,y,d1,d2,d3,d4,h;
	printf("请输入一点坐标\n");
		scanf("%f%f\n",&x,&y);
	d1=(x-2)*(x-2)+(y-2)*(y-2);
	d2=(x+2)*(x+2)+(y-2)*(y-2);
	d3=(x+2)*(x+2)+(y+2)*(y+2);
	d4=(x-2)*(x-2)+(y+2)*(y+2);
	if(d1<=1||d2<=1||d3<=1||d4<=1)
		h=10;
	else
		h=0;
	printf("该点建筑高度为%fm\n",h);
}
