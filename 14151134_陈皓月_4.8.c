#include <stdio.h>
int main()
{
	int a;
	printf("请输入成绩\n");
	scanf("%d",&a);
	if(a>100||a<0)//判断输入是否合格
		printf("errror\n");
	else
		if(a>=90) //确定等级
			printf("等级为A\n");
		else if(a>=80 && a<=89)
			printf("等级为B\n");
		else if(a>=70 && a<=79)
			printf("等级为C\n");
		else if(a>=60 && a<=69)
			printf("等级为D\n");
		else
			printf("等级为E\n");
	return 0;
}
