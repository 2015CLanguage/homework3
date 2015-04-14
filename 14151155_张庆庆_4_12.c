#include<stdio.h>
#include<math.h>
int main()
{
 float x,y,h,r1,r2,r3,r4;//定义浮点类型
printf("请输入所取位置坐标:\n");//请用户输入坐标位置
scanf("%f,%f",&x,&y);//输入坐标
 r1=(x+2)*(x+2)+(y+2)*(y+2);//坐标满足的四种关系
 r2=(x-2)*(x-2)+(y+2)*(y+2);
 r3=(x+2)*(x+2)+(y-2)*(y-2);
 r4=(x-2)*(x-2)+(y-2)*(y-2);
if(r1<=1||r2<=1||r3<=1||r4<=1)//如果满足
printf("该点的建筑高度为10m\n");//输出塔高
else//如果不满足，输出为0
printf("该点的建筑高度为0m\n");
return 0;
