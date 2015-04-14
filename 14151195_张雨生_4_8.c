#include<stdio.h>
int main()
{
	printf("请输入成绩：");
	float a;
	scanf("%f",&a);
	if(a>100||a<0)
		printf("\n输入有误，请重新输入");
	else
	    if(a>=90)
		printf("成绩等级是A\n");
	else
		if(a>=80)
		printf("成绩等级是B\n");
	else
		if(a>=70)
		printf("成绩等级是C\n");
	else
		if(a>=60)
		printf("成绩等级是D\n");
	else
		printf("成绩等级是E\n");
}
