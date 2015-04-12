# include<stdio.h>
int main()
{
	float grade;
	printf("input your mark : ");
	scanf_s("%f", &grade);
	if (grade < 60)
		printf("your grade is E");
	else
	{
		if (grade < 70)
			printf("your grade is D");
		else
		{
			if (grade < 80)
				printf("your grade is C");
			else
			{
				if (grade < 90)
					printf("your grade is B");
				else
					printf("your gradd is A");
			}
		}
	}
	system("pause");
}
