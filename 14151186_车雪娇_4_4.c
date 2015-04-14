#include <stdio.h>
#include <math.h>

int main()
{
     int a,b,c;
     scanf("%d,%d,%d",&a,&b,&c);
     if(a<b)
        if(b<c)
        printf("max=%d\n",c);
     else
        printf("max=%d\n",b);
     else if(a<c)
        printf("max=%d\n",c);
     else
        printf("max=%d\n",a);

    return 0;
}
