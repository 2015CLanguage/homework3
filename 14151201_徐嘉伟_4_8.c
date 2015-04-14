#include<stdio.h>
int main()
{
int x,a;
printf("请输入成绩：",x);
scanf("%d",&x);
a=x/10;
printf("您的成绩等级是：");
switch(a)
{
	case10:
	case9:printf("A");break;
	case8:printf("B");break;
	case7:printf("C");break;
	case6:printf("D");break;
	case5:
	case4:
	case3:
	case2:
	case1:
	case0:printf("E");break;
}
return 0;}
