#include<stdio.h>
void main()
{
	float socre;
	char grade;
	printf("请输入分数(0~100):");
	scanf("%f",&socre);
	switch(int(socre/10))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5: grade = 'E';break;
		case 6: grade = 'D';break;
		case 7: grade = 'C';break;
		case 8: grade = 'B';break;
		case 9: grade = 'A';break;
		case 10: grade = 'A';break;
	}
	printf("成绩分数为:%f,等级为:%c\n",socre,grade);
	
}
