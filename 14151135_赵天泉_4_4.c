#include<stdio.h>
int main()
{
	int a,b,c,t,max;
	printf("请输入a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b)
		t=a;
	else t=b;

	if (t>c)
		max=t;
	else max=c;
	printf("max=%d\n",max);
	return 0;
}
