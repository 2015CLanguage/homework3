#include<stdio.h>
int main()
{
inta,b,c;
scanf("%d,%d,%d",&a,&b,&c);
if(a>b)
     {
if(a>c)
printf("max=%d\n",a);
        else
printf("max=%d\n",c);
     }
   else
     {
        if(b<c)
printf("max=%d\n",c);
        else
printf("max=%d\n",b);
      }
return 0;
}
