#include "stdafx.h"
#include "math.h"

int main()
{
	float x, y;
	scanf_s("%f%f", &x, &y);
	if ((pow((x - 2), 2) + pow((y - 2), 2) < 1) || (pow((x + 2), 2) + pow((y - 2), 2) < 1) || (pow((x - 2), 2) + pow((y + 2), 2) < 1 )||( pow((x + 2), 2) + pow((y + 2), 2) < 1))
		printf_s("高度为10\n");
	else
		printf_s("高度为0\n");
	return 0;
}
