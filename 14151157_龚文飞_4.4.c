#include"stdio.h"
void main()
{
	int a,b,c,max;
	printf("请输入3个整数a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			max=a;
		else max=c;
	}
	else if(b>c)
		max=b;
	else max=c;
	printf("最大的数为%d\n",max);
}
