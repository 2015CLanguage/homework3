# include<stdio.h>
int main(void)
{
	int a,b,c,m;
	printf("请输入a,b,c的值：\n");//输入要比较的数值

	scanf("%d%d%d",&a,&b,&c);

	if (a>b)//用if语句判断最大值
		m=a;
	else 
		m=b;

	if(c>m)
		printf("最大值为%d\n",c);
	else
		printf("最大值为%d\n",m);

		



	return 0;
}
