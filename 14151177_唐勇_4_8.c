# include<stdio.h>
int main()
{
float x;
x=0;
printf("请输入成绩");
scanf("%f",&x);
while(x>100||x<0){
	printf("数据不符合要求，请重新输入\n");
	scanf("%f",&x);}
switch((int)(x/10))
{case 10:
case 9:printf("等级为A\n");break;
case 8:printf("等级为B\n");break;
case 7:printf("等级为C\n");break;
case 6:printf("等级为D\n");break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0:printf("等级为E\n");break;}
return 0;
}
