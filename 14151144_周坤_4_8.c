# homework3
#include<stdio.h>
int main()
{
	printf("请输入成绩：");
	float a;
	scanf("%f",&a);
	if(a>100||a<0)
		printf("输入错误，请重新输入数据\n");
	else
	    if(a>=90)
		printf("成绩等级为A\n");
	else
		if(a>=80)
		printf("成绩等级为B\n");
	else
		if(a>=70)
		printf("成绩等级为C\n");
	else
		if(a>=60)
		printf("成绩等级为D\n");
	else
		printf("成绩等级为E\n");
		return 0;
}
