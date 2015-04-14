#include <stdio.h>
int main()
{
	float score;
	printf("请输入学生的成绩:");
	scanf("%f",&score);
	if(score>=90)
		printf("该学生成绩等级为A\n");
	else if(score>=80)
		printf("该学生成绩等级为B\n");
	else if(score>=70)
		printf("该学生成绩等级为C\n");
	else if(score>=60)
		printf("该学生成绩等级为D\n");
	else
		printf("该学生成绩等级为E\n");
}
