#include<stdio.h>
#include<math.h>
int main()
{
int a,c,s1,t2,h3,t4,t5,th,h,t,s;
printf("请输入一个在(0,99999)范围内的数字:\n");
scanf("%d",&a);
if(a>=9999)
     {
printf("该数为五位数.\n");
      c=5;
      t5=a/10000;
th=(a-t5*10000)/1000;
      h=(a-t5*10000-th*1000)/100;
      t=(a-t5*10000-th*1000-h*100)/10;
      s=a-t5*10000-th*1000-h*100-t*10;
      }
else if(a>=999)
     {
printf("该数为四位数.\n");
      c=4;
      t4=a/1000;
      h=(a-t4*1000)/100;
      t=(a-t4*1000-h*100)/10;
      s=a-t4*1000-h*100-t*10;
     }
else if(a>=99)
     {
printf("该数为三位数.\n");
      c=3;
      h3=a/100;
      t=(a-h3*100)/10;
      s=a-h3*100-t*10;
     }
else if(a>=9)
     {
printf("该数为二位数.\n");
      c=2;
      t2=a/10;
      s=a-t2*10;
     }
else
     {
printf("该数为个位数.\n");
      c=1;
      s1=a;
     }
switch(c)
      {
          case 5:printf("该数各位数上的数分别是:\n");
printf("%d,%d,%d,%d,%d\n",t5,th,h,t,s);
printf ("该数的逆序数为：\n");
printf("%d,%d,%d,%d,%d",s,t,h,th,t5);break;
          case 4:printf("该数各位数上的数分别是:\n");
printf("%d,%d,%d,%d\n",t4,h,t,s);
printf ("该数的逆序数为：\n");
printf("%d,%d,%d,%d",s,t,h,t4);break;
          case 3:printf("该数各位数上的数分别是:\n");
printf("%d,%d,%d\n",h3,t,s);
printf ("该数的逆序数为：\n");
printf("%d,%d,%d",s,t,h3);break;
          case 2:printf("该数各位数上的数分别是:\n");
printf("%d,%d\n",t2,s);
printf ("该数的逆序数为：\n");
printf("%d,%d",s,t2);break;
          case 1:printf("该数各位数上的数分别是:\n");
printf("%d\n",s1);
printf ("该数的逆序数为：\n");
printf("%d",s1);break;
        }
return 0;
}
