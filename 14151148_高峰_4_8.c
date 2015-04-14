#include<stdio.h>
int main()
{
	int grade;
	printf("请输入成绩\n");
	scanf("%d",&grade);
	if(grade>=90)
		printf("A\n");
	if(grade>=80&&grade<90)
		printf("B\n");
	if(grade>=70&&grade<80)
		printf("C\n");
	if(grade>=60&&grade<70)
		printf("D\n");
	if(grade<60)
		printf("E\n");
	return 0;
}
