#include<stdio.h>
int main()
{
float x,y;
int h;
printf("请输入任一点的坐标x,y:\n");
scanf("%f%f",&x,&y);
if(  (((x-2)*(x-2)+(y-2)*(y-2))>1) && (((x-2)*(x-2)+(y+2)*(y+2))>1) && (((x+2)*(x+2)+(y-2)*(y-2))>1)  && (((x+2)*(x+2)+(y+2)*(y+2))>1)  )
    h=0;
else
    h=10;
printf("该点的建筑高度为%d\n",h);
return 0;
}
