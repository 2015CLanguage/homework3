#include <stdio.h>
#include <math.h>
int main()
{
     int a,b,c,t;
     printf("请输入a,b,c\n");
     scanf("%d,%d,%d",&a,&b,&c);
     if(a>b)  //在a,b中找出最大的并赋值给t
        t=a;
     else t=b;
     if(t<c)  //将t与c比较，若t比c小，则将c赋值给t
        t=c;
     printf("最大数为%d\n",t);
     return 0;
}
