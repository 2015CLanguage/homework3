#include"stdio.h"
int main()
{
	float x,y,h,a,b,c,d;
	printf("请输入x，y的坐标");
	scanf("%f%f",&x,&y);
	a=(x-2)*(x-2)+(y-2)*(y-2);
	b=(x+2)*(x+2)+(y-2)*(y-2);
	c=(x+2)*(x+2)+(y+2)*(y+2);
	d=(x-2)*(x-2)+(y+2)*(y+2);
	if(a>1&&b>1&&c>1&&d>1) h=0;
	else h=10;
	printf("%d",h);
	return 0;
}
