#include<stdio.h>
int main()
{int n,a,b,c,d,e;
 printf("请输入一个不多于5位的正整数:\n");
 scanf("%d",&n);
 if(n>9999 && n<100000)
 {
  printf("这是一个5位数\n");
  e=(n-n%10000)/10000;
  d=(n%10000-n%1000)/1000;
  c=(n%1000-n%100)/100;
  b=(n%100-n%10)/10;
  a=n%10;
  printf("个位数位%d,十位数为%d,百位数为%d,千位数为%d,万位数为%d\n",a,b,c,d,e);
  printf("其逆序输出为%d%d%d%d%d\n",a,b,c,d,e);
 }
 else if(n>999 && n<10000)
 {
  printf("这是一个4位数\n");
  d=(n%10000-n%1000)/1000;
  c=(n%1000-n%100)/100;
  b=(n%100-n%10)/10;
  a=n%10;
  printf("个位数位%d,十位数为%d,百位数为%d,千位数为%d\n",a,b,c,d);
  printf("其逆序输出为%d%d%d%d\n",a,b,c,d);
 }
 else if(n>99 && n<1000)
 {
  printf("这是一个3位数\n");
  c=(n%1000-n%100)/100;
  b=(n%100-n%10)/10;
  a=n%10;
  printf("个位数位%d,十位数为%d,百位数为%d\n",a,b,c);
  printf("其逆序输出为%d%d%d\n",a,b,c);
 }
 else if(n>9 && n<100)
 {
  printf("这是一个2位数\n");
  b=(n%100-n%10)/10;
  a=n%10;
  printf("个位数位%d,十位数为%d\n",a,b);
  printf("其逆序输出为%d%d\n",a,b);
 }
 else if(n>0 && n<10)
 {
  printf("这是一个1位数\n");
  a=n%10;
  printf("个位数位%d\n",a);
  printf("其逆序输出为%d\n",a);
 }
 else
 {printf("输入错误，请输入一个不多于5位的正整数!\n");
 }
 return 0;
}
