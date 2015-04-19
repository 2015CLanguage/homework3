#include<stdio.h>
#include<math.h>
int main()
{
	int h=10;//定义变量
	float x1,y1,x2,y2,x3,y3,x4,y4,x,y,d1,d2,d3,d4;
	x1=2,y1=2;
	x2=2,y2=-2;
	x3=-2,y3=-2;
	x4=-2,y4=2;
	printf("请输入一点的坐标(x,y):");
	scanf("%f,%f",&x,&y);//接收输入
	d1=pow((x-x1),2)+pow((y-y1),2);//计算距离
	d2=pow((x-x2),2)+pow((y-y2),2);
	d3=pow((x-x3),2)+pow((y-y3),2);
	d4=pow((x-x4),2)+pow((y-y4),2);
	if (d1>1&&d2>1&&d3>1&&d4>1) h=0;//条件判断输出
	printf("该点的高度为%d\n",h);
	return 0;
}
