#include <stdio.h>
#include <math.h>

int main()
{
        float x,y,h;
        printf("please enter x,y:\n");
        scanf("%f,%f",&x,&y);
        if(((x-2)*(x-2)+(y-2)*(y-2)<=1)||((x+2)*(x+2)+(y-2)*(y-2)<=1))
		h=10;
	else if(((x+2)*(x+2)+(y+2)*(y+2)<=1)||((x+2)*(x-2)+(y+2)*(y+2)<=1))
		h=10;
	else
		h=0;
        printf("h=%6.1f\n",h)
        return 0;
}
