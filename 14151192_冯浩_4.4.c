#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("请输入三个整数:a=?,b=?,c=?\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>=b)
		m=a;
	else
		m=b;
	if(m>=c)
		printf("最大数为：%d\n",m);
	else
		printf("最大数为：%d\n",c);
	return 0;
}
