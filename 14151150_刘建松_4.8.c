#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	float s;
	c1='A';
	c2='B';
	c3='C';
	c4='D';
	c5='E';
	printf("请输入成绩：");
	scanf("%f",&s);
	if(s<0||s>100)
		printf("输入有误\n");
	else if(s<60)
	    printf("成绩等级为：%c\n",c5);
	else if(s<70)
		printf("成绩等级为：%c\n",c4);
	else if(s<80)
		printf("成绩等级为：%c\n",c3);
	else if(s<90)
		printf("成绩等级为：%c\n",c2);
	else
		printf("成绩等级为：%c\n",c1);
    return 0;
}
