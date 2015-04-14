#include<stdio.h>
#include<math.h>
int main()
{ int n,a,b,c,d,e,p;
  printf("请输入一个不多于5位的正整数：");
  scanf("%d",&n);
  if(n>9999) p=5;
  else if(n>999) p=4;
  else if(n>99) p=3;
  else if(n>9) p=2;
  else p=1;
  printf("位数为：%d\n",p);
  e=n/10000;
  d=(int)(n-e*10000)/1000;
  c=(int)(n-e*10000-d*1000)/100;
  b=(int)(n-e*10000-d*1000-c*100)/10;
  a=(int)(n-e*10000-d*1000-c*100-b*10);
  switch(p)
  { case 5:printf("%d,%d,%d,%d,%d\n",e,d,c,b,a);
           printf("逆序数字为：%d,%d,%d,%d,%d",a,b,c,d,e);
		   break;
    case 4:printf("%d,%d,%d,%d\n",d,c,b,a);
           printf("逆序数字为：%d,%d,%d,%d",a,b,c,d);
		   break;
    case 3:printf("%d,%d,%d\n",c,a,b);
           printf("逆序数字为：%d,%d,%d",a,b,c);
		   break;
    case 2:printf("%d,%d\n",b,a);
           printf("逆序数字为：%d,%d",a,b);
		   break;
    case 1:printf("%d\n",a);
           printf("逆序数字为：%d",a);
		   break;
  }
  return 0;

}
