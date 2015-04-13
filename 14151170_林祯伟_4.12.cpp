#include <stdio.h>

int main()
{
	double x,y;
	printf("输入点坐标，以_英文_逗号隔开：");
	scanf("%lf,%lf",&x,&y);
	if((x-2)*(x-2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y-2)*(y-2)<=1||(x-2)*(x-2)+(y+2)*(y+2)<=1||(x+2)*(x+2)+(y+2)*(y+2)<=1) 
	        printf("该点高度为10.");
	else 
	        printf("该点高度为0.");
	
	return 0;
 } 
