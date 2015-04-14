#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, h;
	printf("Please input the \n");
	scanf("%f,%f", &a, &b);
	a=fabs(a);
	b=fabs(b);
	a = (a-2.0)*(a-2.0)+(b-2.0)*(b-2.0);
	if (a>1.0)
		printf("The hight of town is 0m\n");
	else
		printf("The hight of town is 10m\n");
	return 0;
}
