#include<stdio.h>
int main()
{
	float marks;
	int a;
    char grade;
	printf("请输入成绩：");
	scanf("%f",&marks);
	
	
	if(marks<60)
		a=5;
	else if(marks<70)
		a=4;
	else if(marks<80)
		a=3;
	else if(marks<90)
		a=2;
	else if(marks<100)
		a=1;
	else
		printf("成绩数据错误，请重新输入\n");
	
	
	switch(a)
	{
	case 1: grade='A';break;
    case 2: grade='B';break;
    case 3: grade='C';break;
    case 4: grade='D';break;
    case 5: grade='E';break;
	}
	printf("成绩是：%5.2f，相对应的等级是%c\n",marks,grade); 
	return 0;
}
