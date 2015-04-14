#include<stdio.h>
int main()
{
float x,y,a,b,c,d;
printf("请输入该点坐标：");
scanf("%f,%f",&x,&y);
a=(x-2)*(x-2)+(y-2)*(y-2);
b=(x+2)*(x+2)+(y-2)*(y-2);
c=(x-2)*(x-2)+(y+2)*(y+2);
d=(x+2)*(x+2)+(y+2)*(y+2);
if (a<1&&b<1&&c<1&&d<1)
printf("d=10\n");
else
printf("d=0\n");
return 0;
}
