#include <stdio.h>
int main(){
	double x,y;
	int a=0;
	printf("请输入坐标："); 
	scanf("(%lf,%lf)",&x,&y);
	if((x-2)*(x-2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y-2)*(y-2)<=1||(x-2)*(x-2)+(y+2)*(y+2)<=1||(x+2)*(x+2)+(y+2)*(y+2)<=1)
	{
	a=10;}
	printf("此地的高度为%d米",a); 
	return 0;
} 
