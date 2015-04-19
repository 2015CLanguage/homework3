#include<stdio.h>
int main()
{
	int a,b,c;
	printf("请输入三个整数:");//接收输入
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b)                    //嵌套if语句判断大小
		if(b<c)
			printf("最大数为%d\n",c);
		else
			printf("最大数为%d\n",b);
	else if(a<c)
		printf("最大数为%d\n",c);
	else
		printf("最大数为%d\n",a);
	return 0;
}
