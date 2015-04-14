#include<stdio.h>
int main()
{
int a,b,c,m,n;
scanf("a=%d,b=%d,c=%d",&a,&b,&c);
if(a>=b) m=a;
else m=b;
if(m>=c) n=m;
else n=c;
printf("%d",n);
return 0;
}
