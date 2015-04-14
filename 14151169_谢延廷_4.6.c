#include <stdio.h>
int main()
{int x,y;
printf("请输入一个整数x:");
scanf("%d",&x);
if (x<1)
{y=x;
printf("y=%d",y);}

else
if (x<10)
{y=2*x-1;
printf("y=%d",y);}


else
{y=3*x-11;
printf("y=%d",y);
}

return 0;



}
