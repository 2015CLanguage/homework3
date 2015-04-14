# include<stdio.h>
int main()
{
float x;
x=0;
printf("请输入成绩");
scanf("%f",&x);
while(x>100||x<0){
	printf("输入数据不合要求，请重新输入\n");
	scanf("%f",&x);}
switch((int)(x/10))
{case 10:
case 9:printf("您的评价为A\n");break;
case 8:printf("您的评价为B\n");break;
case 7:printf("您的评价为C\n");break;
case 6:printf("您的评价为D\n");break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:printf("您的评价为E\n");break;}
return 0;
}
