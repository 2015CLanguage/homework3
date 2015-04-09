#include "stdafx.h"


int main()
{
	float sco;
	char gra;
	scanf_s("%f", &sco);
	if (sco<0 || sco>100)
		printf_s("error,please input again\n");
	else
	{
		switch (int(sco / 10))
		{
		case 10:gra = 'A'; break;
		case 9:gra = 'A'; break;
		case 8:gra = 'B'; break;
		case 7:gra = 'C'; break;
		case 6:gra = 'D'; break;
		default:gra = 'E';
		}
	}
	printf("成绩为%c\n",gra);
	return 0;
}
