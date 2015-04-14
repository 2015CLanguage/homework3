#include"stdio.h"
int main()
{
	float score;
	printf("请输入一个一百分制的分数：");
	scanf("%f",&score);
	switch((int)(score/10))
	{
	    case 10: printf("成绩等级为：A\n");break;
	    case 9: printf("成绩等级为：A\n");break;
	    case 8: printf("成绩等级为：B\n");break;
		  case 7: printf("成绩等级为：C\n");break;
		  case 6: printf("成绩等级为：D\n");break;
		  case 5: printf("成绩等级为：E\n");break;
		  case 4: printf("成绩等级为：E\n");break;
		  case 3: printf("成绩等级为：E\n");break;
		  case 2: printf("成绩等级为：E\n");break;
		  case 1: printf("成绩等级为：E\n");break;
		  case 0: printf("成绩等级为：E\n");break;
		  default: printf("输入的分数错误");
	}
	return 0;
}

	   
