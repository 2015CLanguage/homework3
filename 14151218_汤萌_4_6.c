#include<stdio.h>

int main()
{
	float x, y;
	printf("Please input x = ");
	scanf("%f", &x);
	if (x<1.0f)
		y = x;
	else if (x<10)
		y = 2*x-1;
	else
		y = 3*x-11;
	printf("y = %.4f\n", y);
	return 0;
}
