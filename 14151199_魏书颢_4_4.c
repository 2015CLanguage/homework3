#include"stdio.h"
int main()
{
int a,b,c,max,temp;
printf("请输入三个整数");
scanf("%d%d%d",&a,&b,&c);
temp=(a>b)?a:b;
max=(c>temp)?c:temp;
printf("最大数为%d\n",max);
return 0;
}
