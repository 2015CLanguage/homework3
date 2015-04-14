#include <stdio.h> 
int main()
{double a,b,c,m,n;
 scanf("%lf,%lf,%lf",&a,&b,&c);
 if(a>=b) m=a;
 else m=b;
 if(m>=c) n=m;
 else n=c;
 printf("最大的数值是%lf",n);
}
