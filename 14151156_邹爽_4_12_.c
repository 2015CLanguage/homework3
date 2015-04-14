#include <stdio.h>
int main()
{
    int h;
	float x,y;
    scanf("%f,%f",&x,&y);
	if(x>=0&&y>=0)
	{if((x-2)*(x-2)+(y-2)*(y-2)<=1)
	     h=10;
	else h=0;}
	if(x>=0&&y<0)
	{if((x-2)*(x-2)+(y+2)*(y+2)<=1)
	     h=10;
	else h=0;}
	if(x<0&&y>=0)
	{if((x+2)*(x+2)+(y-2)*(y-2)<=1)
	     h=10;
    else h=0;}
    if(x<0&&y<0)
    {if((x+2)*(x+2)+(y+2)*(y+2)<=1)
         h=10;
    else h=0;}
	printf("该点建筑物高度为%d单位为米/n",h);
}
