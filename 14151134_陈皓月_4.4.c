#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("请输入三个整数\n");
	scanf("%d,%d,%d",&a,&b,&c);//输入a，b，c
	if(a<b)//将a，b中较大的赋值给max
		max=b;
	else
		max=a;
	if(max<c)
		printf("最大值为%d\n",c);//输出最大值
	else
		printf("最大值为%d\n",max);//输出最大值
	return 0;
}
