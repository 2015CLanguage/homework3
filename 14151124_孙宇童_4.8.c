# include<stdio.h>

int main(void)
{
	int a;
	
	printf("请输入您的成绩：");

	scanf("%d",&a);//输入成绩

	if(a>=90)//用if函数判断成绩所属范围
		printf("'A'\n");

	else if(a>=80&&a<=89)
		
		printf("'B'\n");

	else if(a>=70&&a<=79)

		printf("'C'\n");

	else if(a>=60&&a<=69)

		printf("'D'\n");

	else if(a<60)

		printf("'E'\n");




	
	return 0;
}
