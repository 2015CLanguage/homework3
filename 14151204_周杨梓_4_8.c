#include<stdio.h>
int main()
{
 int grade,g;
 printf("请输入百分制成绩:\n"); 
 scanf("%d",&grade);
 g=grade/10;
 printf("转换后的成绩等级为:\n");
 switch(g)
 {
  case(10):
  case(9):printf("A\n");break;
  case(8):printf("B\n");break;
  case(7):printf("C\n");break;
  case(6):printf("D\n");break;
  case(5):
  case(4):
  case(3):
  case(2):
  case(1):	
  case(0):printf("E\n");break;
  default:printf("error\n");
 }
 return 0;
}
