# include <stdio.h>
int main(void)
{
 int h=10;

 float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2,d1,d2,d3,d4,x,y;

 printf("请输入点的横纵坐标：\n");

 scanf("%f%f",&x,&y);//输入坐标

  d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);//计算点到圆心的距离
  d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
  d3=(x-x3)*(x-x3)+(y-y3)*(y-y3);
  d4=(x-x4)*(x-x4)+(y-y4)*(y-y4);
 
  if(d1>1&&d2>1&&d3>1&&d4>1) //判断点是否在圆内

	  h=0;

  else 
	  h=10;
	 
	  printf("该点的高度为%d\n",h);
 return 0;
}
