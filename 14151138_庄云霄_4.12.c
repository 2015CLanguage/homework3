#include <stdio.h>
void main()
{
	float x,y,d1,d2,d3,d4;
    int h=10;
	printf("please input (x,y)");
	scanf("%f,%f",&x,&y);
    d1=(x-2)*(x-2)+(y-2)*(y-2);
    d2=(x+2)*(x+2)+(y-2)*(y-2);
    d3=(x+2)*(x+2)+(y+2)*(y+2);
    d4=(x-2)*(x-2)+(y+2)*(y+2);
	if (d1>1 && d2>1 && d3>1 &&d4>1) h=0;
	printf("该点的高度为:%d\n",h);
}
