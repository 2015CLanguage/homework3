#include<stdio.h>
#include<math.h>
int main()
{
int c;
float s;
scanf("%f",&s);//输入成绩
  if(s>100)//判断成绩，如果大于100，则输入数据有误，请用户重新输入
  {
printf("输入数据有误，请重新输入\n");
scanf("%f",&s);//重新输入成绩
  }
  if(s>=90)//如果成绩>=90
  c=9;//则c的值均为9
  if(s<60)//如果成绩<60
  c=5;//则c的值均为5
  else c=(int)s/10;//将s强制转化为整型，求c
switch (c)
  {
      case 9:printf("你的成绩等级是‘A’\n");break ;//c=9,输出你的成绩等级是‘A’
      case 8:printf("你的成绩等级是‘B’\n");break ;//c=8,输出你的成绩等级是‘B’
      case 7:printf("你的成绩等级是'C'\n");break ;//c=7,输出你的成绩等级是‘C’
      case 6:printf("你的成绩等级是'D'\n");break ;//c=6,输出你的成绩等级是‘D’
      case 5:printf("你的成绩等级是'E'\n");break ;//c=5,输出你的成绩等级是‘E’
default :printf("enter data error!\n");//否则输出你的输入数据有误
  }
return 0;
}
