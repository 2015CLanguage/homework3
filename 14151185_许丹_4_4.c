#include <stdio.h>
int main()
{ int a,b,c,t,m;
  printf("请输入三个整数：");
  scanf("%d,%d,%d",&a,&b,&c);
  t=(a>b)?a:b;
  m=(t>c)?t:c;
  printf("最大的数是：%d\n",m);
  return 0;
}
