#include <stdio.h>

int main()
{
	int mark,grade;
	printf("输入百分制成绩：");
	scanf("%d",&mark);
	if(mark>=90) printf("成绩等级A");
	if(mark>=80&&mark<90) printf("成绩等级B");
	if(mark>=70&&mark<80) printf("成绩等级C");
  if(mark>=60&&mark<70) printf("成绩等级D");
	if(mark<60) printf("成绩等级E");
	
	return 0; 

}
