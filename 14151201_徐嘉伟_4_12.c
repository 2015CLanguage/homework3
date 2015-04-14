#include<stdio.h>
int main()
{
double x,y;
int a=0;
printf("输入点的坐标:",x,y);
scanf("(%lf,%lf)",&x,&y);
if((x-2)*(x-2)+(y-2)*(y-2)<=1||(x-2)*(x-2)+(y+2)*(y+2)<=1||(x+2)*(x+2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y+2)*(y+2)<=1)
a=10;
printf("该点处的高度是:%d",a);
return 0;
 }
