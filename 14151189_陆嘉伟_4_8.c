#include<stdio.h>
int main()
{
float x;
printf("请输入学生成绩：");
scanf("%f",&x);
if(x>=90)
	printf("成绩等级为A");
else if(x>=80)
	printf("成绩等级为B");
else if(x>=70)
	printf("成绩等级为C");
else if(x>=60)
	printf("成绩等级为D");
else
	printf("成绩等级为E");
return 0;
}
