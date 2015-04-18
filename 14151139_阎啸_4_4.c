#include <stdio.h>
int main()
{
        int a,b,c,m;
        printf("please enter a,b,c:\n")
        scanf("%d,%d,&d",&a,&b,&c);
        if (a>b)
                m=a;
        else m=b;
        if(c>m)
                m=c;
        printf("max=%d\n",m);
        return 0
}
