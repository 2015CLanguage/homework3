#include<stdio.h>
#include<math.h>
int main()
{
float w,f0,f,m,a,x;
    f0=0.8;
    m=0.5;
    a=2.00;
printf("请您输入邮件的重量(单位为g):\n");
scanf("%f",&w);
printf("请问是否需要加快?如果需要，请输入1;如果不需要请输入0\n");
scanf("%d",&x);
if(x==0)
    {
if (w<=1)
      f=f0;
else
      f=f0+m*w;
    }
else
    {
if(w<=1)
      f=f0+a;
else
    f=f0+m*w+a;
    }
printf("邮资为%.2f￥\n",f);
return 0;

}
