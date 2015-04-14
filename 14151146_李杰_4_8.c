#include<stdio.h>
void main()
{
	int grade;
	char grade_class;
	printf("enter your grade\n");
	scanf("%d",&grade);
	if(grade>=90)
		grade_class='A';
	else if(grade>=80&&grade<=89)
		grade_class='B';
	else if(grade>=70&&grade<=79)
		grade_class='C';
	else if(grade>=60&&grade<=69)
		grade_class='D';
	else
		grade_class='E';
	printf("Your grade-class is %c.\n",grade_class);
}
