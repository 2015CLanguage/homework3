#include<stdio.h>
void main()
{
	float x;
	char y;
	printf("请输入分数\n");
	scanf("%f",&x);
	if(x>=90)
		y='A';
	 else if(x>=80)
		 y='B';
	 else if(x>=70)
		 y='C';
	 else if(x>60)
		 y='D';
	else y='E';
	printf("您成绩的等级为\n");
	putchar(y);
	putchar('\n');
}
