#include<stdio.h>
int main()
{ float g;
  char r;
  printf("请输入百分制成绩：");
  scanf("%f",&g);
  if(g>=90) r='A';
  else if (g>=80) r='B';
  else if (g>=70) r='C';
  else if (g>=60) r='D';
  else r='E';
  printf("等级为：%c\n",r);
  return 0;
}
