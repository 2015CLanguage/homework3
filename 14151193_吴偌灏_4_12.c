#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
	  scanf("%f,%f",&x,&y);
	  x=fabs(x);y=fabs(y);
	  if((x-2)*(x-2)+(y-2)*(y-2)<=1) printf("此点高度为10米\n");
        else printf("此点高度为0米\n");
    return 0;
}
