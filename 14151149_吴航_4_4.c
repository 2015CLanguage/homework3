#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三个整数:");
	scanf("%d,%d,%d",&a,&b,&c);
	if (a<b)
		if (b<c)
			printf("最大的数为%d\n",c);
		else
			printf("最大的数为%d\n",b);
	else if (a<c)
			printf("最大的数为%d\n",c);
	else
			printf("最大的数为%d\n",a);
	return 0;
}
