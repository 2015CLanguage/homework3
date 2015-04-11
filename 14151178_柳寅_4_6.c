#include <stdio.h>
int main()
{float x,y;
printf("输入x：");
scanf("%f",&x);
if(x<1)
 {y=x;
 printf("y=x=%f\n",y);}
if(1<=x<10)
 {y=2*x-1;
 printf("y=2*x-1=%f\n",y);}
if(x>=10)
 {y=3*x-11;
 printf("y=3*x-11=%f\n",y);}
return 0; 
}
