#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,a,b,c,d;
	printf("请输入坐标(x,y):");
	scanf("(%f,%f)",&x,&y);
  a=pow(x-2,2)+pow(y-2,2);
	b=pow(x+2,2)+pow(y-2,2);
	c=pow(x-2,2)+pow(y+2,2);
	d=pow(x+2,2)+pow(y+2,2);
	if(a<=1||b<=1||c<=1||d<=1)
		printf("高度为10米\n");
	else
		printf("高度为0\n");
	return 0;
}
