# homework3
#include<stdio.h>
int main()
{
 double i,p;
 int d;
 printf("请输入当月利润:\n");
 scanf("%lf",&i);
 d=(int)i/100000;
 switch(d)
 {
 case 0:
 p=0.1*i;break;
 case 1:
 p=0.1*100000+(i-100000)*0.075;break;
 case 2:
 case 3:
 case 4:
 p=0.1*100000+(i-100000)*0.075+(i-200000)*0.05;break;
 case 5:
 p=0.1*100000+(i-100000)*0.075+(i-200000)*0.05+(i-400000)*0.03;break;
 case 6:
 case 7:
 case 8:
 case 9:
 p=0.1*100000+(i-100000)*0.075+(i-200000)*0.05+(i-400000)*0.03+(i-600000)*0.015;break;
 default:
 p=0.1*100000+(i-100000)*0.075+(i-200000)*0.05+(i-400000)*0.03+(i-600000)*0.015+(i-1000000)*0.01;
 }
 printf("应发奖金总数为%f\n",p);
 return 0;
}
