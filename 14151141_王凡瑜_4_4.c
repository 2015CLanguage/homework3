#include<stdio.h>

int max(int a,int b,int c)
{
    int rel=a;
    if(rel<b)
		rel=b;
	if(rel<c)
		rel=c;
	return rel;
}

void main()
{
	int a,b,c;
    printf("请输入3个整数\n");
    scanf("%d%d%d",&a,&b,&c);
	printf("其中最大的数为%d\n",max(a,b,c));
}
