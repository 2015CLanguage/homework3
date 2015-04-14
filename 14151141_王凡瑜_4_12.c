#include<stdio.h>
#include<math.h>
double distance(double x,double y, double p,double q)
{
    return sqrt((pow(x-p,2)+pow(y-q,2)));
}

void main()
{
    double x,y,d1,d2,d3,d4;
	int h;
	printf("请输入点的坐标\n");
	scanf("%lf,%lf",&x,&y);
	d1=distance(x,y,2,2);
	d2=distance(x,y,2,-2);
	d3=distance(x,y,-2,2);
	d4=distance(x,y,-2,-2);
	if(d1<=1 || d2<=1 || d3<=1 || d4<=1)
		h=10;
	else
		h=0;
	printf("该点的建筑高度为%dm\n",h);
}
