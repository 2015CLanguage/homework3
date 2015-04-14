#include <stdio.h>
void main()
{
	int c;
	printf("请输入你的分数\n");
	scanf("%d",&c);
	if (c<0 || c>100)
		printf("error,please input again\n");
	else
	{
		printf("你的分数等级是\n");
	    c=c/10;
	    switch(c)
	    {
		    case 10:printf("A\n");break;
		    case 9:printf("A\n");break;
		    case 8:printf("B\n");break;
		    case 7:printf("C\n");break;
		    case 6:printf("D\n");break;
		    default:printf("E\n");
	    }
	}
}
