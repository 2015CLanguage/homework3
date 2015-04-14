#include <stdio.h>
int main()
{
	float x,y,h,t1,t2,t3,t4;
	printf("请输入（x,y）",x,y);
	scanf("%f,%f",&x,&y);
	t1=(x-2)*(x-2)+(y-2)*(y-2);
	t2=(x-2)*(x-2)+(y+2)*(y+2);
	t3=(x+2)*(x+2)+(y-2)*(y-2);
	t4=(x+2)*(x+2)+(y+2)*(y+2);
	if ((t1<=1)||(t2<=1)||(t3<=1)||(t4<=1))
		printf("高度为%.1fm\n",10.0);
	else 
		printf("高度为%.1fm\n",0);
	return 0;
}
