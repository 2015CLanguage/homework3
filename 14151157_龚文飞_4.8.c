#include"stdio.h"
void main()
{
	float score;
	int a;
	scanf("%f", &score);
	
		a = (int)(score / 10);
	
	switch (a)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4: 
	case 5:printf("The grade level is 'E'.\n"); break;
	case 6:printf("The grade level is 'D'.\n"); break;
	case 7:printf("The grade level is 'C'.\n"); break;
	case 8:printf("The grade level is 'B'.\n"); break;
	case 9:printf("The grade level is 'A'.\n"); break;

	}
}
