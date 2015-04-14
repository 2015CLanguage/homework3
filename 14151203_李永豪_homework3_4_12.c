# homework3
#include <stdio.h>
#include<math.h>
int main()
{
    float x,y,l1,l2,l3,l4;
    scanf("%f,%f",&x,&y);
    l1=(x-2)*(x-2)+(y-2)*(y-2);
    l2=(x+2)*(x+2)+(y-2)*(y-2);
    l3=(x+2)*(x+2)+(y+2)*(y+2);
    l4=(x-2)*(x-2)+(y+2)*(y+2);
    if(l1>1&&l2>1&&l3>1&&l4>1) printf("该处建筑高度为0米\n");
    else printf("该处建筑高度为10米\n");
        
    return 0;
}
