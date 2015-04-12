# include<stdio.h>
int main()
{
	float x;
	printf("input x: ");
	scanf_s("%f", &x);
	if (x < 1)
		printf("outcome is %f", x);
	else
	{
		if (10)
			printf("outcome is %f", 2 * x - 1);
		else
			printf("outcome is %f", 3 * x - 11);
	}
	system("pause");
}
