#include <stdio.h>
void main()
{
	int a,b,c,max;
	printf("请输入三个数abc\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			max=a;
		else
			max=c;
	}
	else
	{
		if(a>c)
			max=b;
		else if(b>c)
			max=b;
		else
			max=c;
	}
	printf("abc中最大数为%d\n",max);
}
