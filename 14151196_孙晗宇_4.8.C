# include<stdio.h>
int main()
{
	float a;
	printf("input your mark : ");
	scanf_s("%f", &a);
	if (grade < 60)
		printf("成绩你的是 E");
	else
	{
		if (grade < 70)
			printf(" 成绩你的是D");
		else
		{
			if (grade < 80)
				printf(" 成绩你的是C");
			else
			{
				if (grade < 90)
					printf("成绩你的是 B");
				else
					printf("成绩你的是 A");
			}
		}
	}
	system("pause");
}
