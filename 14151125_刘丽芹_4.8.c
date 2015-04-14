#include <stdio.h>
int main()
{
	int x;
	char M;//申请整型变量x和字符变量M
	M='f';
	printf("请输入百分制成绩:\n");
	scanf("%d",&x);//手动输入百分制分数
	if (x>=90&&x<=100)
		M='A';
	else if (x>=80&&x<=89)
		M='B';
	else if (x>=70&&x<=79)
		M='C';
	else if (x>=60&&x<=69)
		M='D';
	else if (x>=0&&x<=60)
		M='E';
	else
	
		printf("Error");//若输入不合法，则输出错误提示
		
	
	printf("成绩等级为%c\n",M);
	return 0;
}
