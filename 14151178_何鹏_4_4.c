#include "stdafx.h"

int main()
{
	float a, b, c;
	scanf_s("%f%f%f", &a, &b, &c);
	if (a < b)a = b;
	if (a < c)a = c;
	printf_s("最大数为%f", a);
	return 0;
}
