#include <stdio.h>
int main ()
{
	int x;
	printf("请输入成绩:");
	scanf("%d",&x);
	if (x>100||x<0)
		{ printf("输入有误");
		}
	else if (0<=x && x<60)
	{ printf("成绩等级为E\n");
	}
	else if (60<=x && x<70)
	{ printf("成绩等级为D\n");
	}
	else if (70<=x && x<80)
	{ printf("成绩等级为C\n");
	}
	else if (80<=x && x<90)
	{ printf("成绩等级为B\n");
	}
	else if (90<=x && x<=100)
	{ printf("成绩等级为A\n");
	}
	return 0;
}
