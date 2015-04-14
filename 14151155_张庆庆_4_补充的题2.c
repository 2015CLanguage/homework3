#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,result;//定义浮点类型
    char m;//定义字符类型
printf("请依次输入所需运算的数字和运算符:\n");//请用户输入数据和运算关系
scanf("%f%c%f",&a,&m,&b);
      if(m=='+')//如果是加法运算，执行以下操作
      {
         result=a+b;
printf("数据的运算结果是:%.2f\n",result);
      }
      else if(m=='-')//如果是减法运算，执行以下操作
        {
         result=a-b;
printf("数据的运算结果是:%.2f\n",result);
        }
      else if(m=='*')//如果是乘法运算，执行以下操作
      {
         result=a*b;
printf("数据的运算结果是:%.2f\n",result);
      }
      else//如果是除法运算，执行以下操作
        {
          if(b!=0)//如果b!=0，执行以下操作
          {result=a/b;
printf("数据的运算结果是:%.2f\n",result);
          }
          else printf("你输入的数据有误!\n");//否则，提醒用户输入数据有误
        }
    return 0;
}
