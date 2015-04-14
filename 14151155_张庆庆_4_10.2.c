#include<stdio.h>
#include<math.h>
int main ()
{
int s;
    float i,p,a,b,c,d,e;//定义字符类型
printf("请输入当月利润(单位为￥):\n");//请用户输入当月利润
scanf("%f",&i);
    a=100000*0.1;//定义a,b,c,d,e变量的初值
    b=a+100000*0.075;
    c=b+200000*0.05;
    d=c+200000*0.03;
    e=d+400000*0.015;
    if(i>100000)//判断i的大小，如果i满足以下各条件，对应运行各个语句
      s=11;
else
      s=i/100000;
switch (s)
    {
case 0:
case 1:p=i*0.1;break;
case 2:p=a+(i-100000)*0.075;break;
case 3:
case 4:p=b+(i-200000)*0.05;break;
case 5:
case 6:p=c+(i-400000)*0.03;break;
case 7:
case 8:
case 9:
case 10: p=d+(i-600000)*0.015;break;
case 11:p=e+(i-1000000)*0.01;break;
    default:("你输入的数据有误！\n");
    }
printf("当月所获奖金额为:%.2f￥\n",p);//输出当月所获金额
return 0;
}
