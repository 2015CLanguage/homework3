#include "stdafx.h"

int main()
{
	float x, y;
	scanf_s("%f", &x);
	if (x < 1)y = x;
	else if (x < 10)y = 2 * x - 1;
	else y = x*x - 11;
	printf_s("y=%f\n", y);
	return 0;
}
