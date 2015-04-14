#include<stdio.h>
int main()
{
	float score;
	char grade;
	printf("请输入学生的成绩：");
	scanf_s("%f", &score);
	if (score > 100 && score < 0)
		printf("\n输入成绩不符合要求！");
	switch ((int)(score / 10))
	{
	case 10:grade = 'A'; break;
	case 9:grade = 'A'; break;
	case 8:grade = 'B'; break;
	case 7:grade = 'C'; break;
	case 6:grade = 'D'; break;
	case 5:grade = 'E'; break;
	case 4:grade = 'E'; break;
	case 3:grade = 'E'; break;
	case 2:grade = 'E'; break;
	case 1:grade = 'E'; break;
	case 0:grade = 'E'; break;
	}
	printf("该同学成绩等级为:%c\n", grade);
return 0;
}
