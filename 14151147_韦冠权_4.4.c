#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("请输入三个整数：（用逗号隔开）");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		if(a>c)
			t=a;
		else
			t=c;
	else
		if(b>c)
			t=b;
		else
			t=c;
	printf("三个数中数值最大的数是：%d\n",t);
	return 0;
}
