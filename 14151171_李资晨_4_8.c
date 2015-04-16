#include<stdio.h>
int main()
{
	float score;
	scanf("%f",&score);
	if(score<0 || score>100)
		printf("enter data error!\n");
	else
	{
		switch(int(score/10))
		{
		case 10: printf("A\n");break;
		case 9: printf("A\n");break;
		case 8: printf("B\n");break;
		case 7: printf("C\n");break;
		case 6: printf("D\n");break;
        default: printf("E\n");
		}
	}
	return 0;
}

