#include<stdio.h>
#include<math.h>
void main()
{
	float x,y;
	int z;
	printf("请输入点的横纵坐标，用逗号隔开\n");
	scanf("%f,%f",&x,&y);
	if((fabs(x)==2)&&(fabs(fabs(y)-fabs(x))==1))
		z=10;
	else z=0;
	printf("该点的建筑物高度为:%d\n",z);
}
