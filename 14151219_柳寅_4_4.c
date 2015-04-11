#include <stdio.h>
int main()
{int a,b,c,d,max;
printf("请输入三个整数：");
scanf("%d,%d,%d",&a,&b,&c);
temp=(a>b)?a:b;
max=(temp>c)?temp:c;
printf("三个整数中的最大数为：%d\n",max);
return 0; 
}
