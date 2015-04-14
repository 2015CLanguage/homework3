#include <stdio.h>
void main()
{
	float m;
	char n;
	printf("请输入成绩：");
	scanf("%f",&m);
	switch((int)(m/10))
	{case 10:
	case 9: n='A';break;
	case 8:n='B';break;
	case 7:n='C';break;
	case 6:n='D';break;
	default: n='E';
	}
	printf("成绩为%.1f,等级为%c\n",m,n);
}
	
