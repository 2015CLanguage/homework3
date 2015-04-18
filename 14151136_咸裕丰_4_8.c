#include"stdio.h"
int main()
{
	float s;
	char g;
	printf("请输入分数成绩:");
    scanf("%f",&s);
    if(s>=90&&s<=100)
	{g='A';
	printf("成绩等级为:%c\n",g);}
	else if(s<90&&s>=80)
	{g='B';
	printf("成绩等级为:%c\n",g);}
    else if(s<80&&s>=70)
	{g='C';
	printf("成绩等级为:%c\n",g);}
    else if(s<70&&s>=60)
	{g='D';
	printf("成绩等级为:%c\n",g);}
    else if(s<60&&s>=0)
	{g='E';
	printf("成绩等级为:%c\n",g);}
	else if("s>100&&s<0")
	printf("成绩输入有误\n");
	return 0;
}
