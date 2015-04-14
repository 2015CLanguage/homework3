#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("请输入a=?");
	scanf("%d",&a);
	printf("请输入b=?");
	scanf("%d",&b);
	printf("请输入c=?");
	scanf("%d",&c);
	if(a>b)
		m=a;
	else
		m=b;
	if(c>m)
		m=c;
	printf("最大数是%d\n",m);
	return 0;
}
