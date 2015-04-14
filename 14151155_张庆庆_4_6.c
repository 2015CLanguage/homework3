#include<stdio.h>
#include<math.h>
int main()
{
floatx,y;
scanf("%f",&x);//输入x的值
    if(x<1)//判断如果x<1
    y=x;//则运用y=x的关系式
else
    if(x>=10)//判断如果x<1
    y=3*x-11;//则运用y=3*x-11的关系式
else
    y=2*x-1;//否则运用y=2*x-1的关系式
printf("%f\n",y);//输出y的值
return 0;
}
