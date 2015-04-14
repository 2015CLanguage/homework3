#include<stdio.h>
int main()
{
	float grade;
	int a;
	printf("Please input the grade: ");
	scanf("%f", &grade);
	a = grade/10;
	switch(a)
	{
		case 0: 
		case 1: 
		case 2: 
		case 3: 
		case 4:
		case 5: printf("Rate E\n"); break;
		case 6: printf("Rate D\n"); break;
		case 7: printf("Rate C\n"); break;
		case 8: printf("Rate B\n"); break;
		case 9:
		case 10: printf("Rate A\n"); break;
	}
	return 0;
}
