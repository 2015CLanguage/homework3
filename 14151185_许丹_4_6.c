#include<stdio.h>
int main()
{ int x,y;
  printf("请输入x的值：");
  scanf("%d",&x);
  if(x<1) y=x;
  else if(x<10)  y=2*x-1;
  else y=3*x-11;
  printf("x=%d,y=%d\n",x,y);
  return 0;
}
