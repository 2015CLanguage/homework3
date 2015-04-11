#include <stdio.h>
int main()
   {float s;
   char  g;
   printf("请输入学生成绩：");
   scanf("%f",&s);
   while(s>100||s<0)
    {printf("输入错误,请重新输入");
     scanf("%f",&s);}
   switch((int)(s/10))
   {case 10:
    case 9:g='A';break;
    case 8:g='B';break;
    case 7:g='C';break;
    case 6:g='D';break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:g='E';}
  printf("成绩是%5.1f,等级是%c\n",s,g);
  return 0;}
