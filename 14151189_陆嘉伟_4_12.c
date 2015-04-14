#include<stdio.h>
int main()
{
float x,y;
float d1,d2,d3,d4;
printf("输入坐标：");
scanf("%f,%f",&x,&y);
d1=(x-2)*(x-2)+(y-2)*(y-2);
d2=(x-2)*(x-2)+(y+2)*(y+2);
d3=(x+2)*(x+2)+(y-2)*(y-2);
d4=(x+2)*(x+2)+(y+2)*(y+2);
if(d1>1&&d2>1&&d3>1&&d4>1)
	  printf("高度为0");
else
    printf("高度为10");
return 0;
}
