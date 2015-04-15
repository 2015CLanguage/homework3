#include<stdio.h>
int main()
{
        int h;
        float x,y,d1,d2,d3,d4;
        scanf("%f,%f",&x,&y);
        d1=(x-2)*(x-2)+(y+2)*(y+2);
        d2=(x-2)*(x-2)+(y-2)*(y-2);
        d3=(x+2)*(x+2)+(y-2)*(y-2);
        d4=(x+2)*(x+2)+(y+2)*(y+2);
        if (d1>1 && d2>1 && d3>1 && d4>1)
            printf("h=0\n");
        else
            printf("h=10\n");
            return 0;
}
