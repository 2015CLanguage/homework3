#include "stdio.h"

int main()
{
	int max,a,b,c;
	printf("请输入需要比较大小的三个数，以逗号隔开：\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		max=a;
	else max=b;
	if(max<c)
		max=c;

	printf("三数中最大值为%d\n",max);
	return 0;
}
