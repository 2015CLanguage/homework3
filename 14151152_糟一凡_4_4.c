#include"stdio.h"
int main()
{
	int a,b,c,max;
	printf("Please enter three numbers:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	if(max<c)
	{
		max=c;
	}
	printf("max=%d\n",max);
	return 0;
}
