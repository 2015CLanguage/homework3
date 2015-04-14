#include<stdio.h>
int main()
{
int a,b,c;
printf("请输入三个整数：");
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
	if(a>c)
		printf("最大值是%d",a);
	else 
		printf("最大值是%d",c);
else if(b>c)
	printf("最大值是%d",b);
else
	printf("最大值是%d",c);
return 0;
}
