#include<stdio.h>
int main()
{
  float l1,l2,l3,l4,x,y;
  printf("请输入点坐标（x,y):");
  scanf("%f,%f\n",&x,&y);
  l1=(x-2)*(x-2)+(y-2)*(y-2);
  l2=(x+2)*(x+2)+(y-2)*(y-2);
  l3=(x+2)*(x+2)+(y+2)*(y+2);
  l4=(x-2)*(x-2)+(y+2)*(y+2);
  if(l1>1&&l2>1&&l3>1&&l4>1)
    printf("该点高度为：0m\n");
  else
    printf("该点高度为：10m\n");
	return 0;
}
