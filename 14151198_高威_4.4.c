#include <stdio.h>

int main()
{
   scanf("%d%d%d",&a,&b,&c);
   a=(a>b)?a:b;
   a=(a>c)?:c;
   printf("%d\n",a);
   return 0;
}
