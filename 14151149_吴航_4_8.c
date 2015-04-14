#include<stdio.h>
int main()
{
int a;
printf("成绩:");
scanf("%d",&a);
if (a<60)
	printf("E\n");
	else if (a<70)
		printf("D\n");
		else if (a<80)	
			printf("C\n");
			else if (a<90)
				printf("B\n");
				else
				printf("A\n");
return 0;
}
