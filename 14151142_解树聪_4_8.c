#include<stdio.h>
int main()
{
	float score;
	char grade;
	printf("请输入成绩:");
	scanf("%f",&score);
	while(score<0||score>100)
	{	printf("输入有误，请重新输入:");
		scanf("%f",&score);
	}
	if(score>=90&&score<=100)
	{	grade='A';
		printf("成绩为:%.1f,对应的等级是:%c\n",score,grade);
	}
	else if(score>=80&&score<90)
	{	grade='B';
		printf("成绩为:%.1f,对应的等级是:%c\n",score,grade);
	}
	else if(score>=70&&score<80)
	{	grade='C';
		printf("成绩为:%.1f,对应的等级是:%c\n",score,grade);
	}
	else if(score>=60&&score<70)
	{	grade='D';
		printf("成绩为:%.1f,对应的等级是:%c\n",score,grade);
	}
	else 
	{	grade='E';
		printf("成绩为:%.1f,对应的等级是:%c\n",score,grade);
	}
	return 0;
}
