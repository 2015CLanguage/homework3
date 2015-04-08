#include<stdio.h>
#include<math.h>
int main()
{float x,y,d,h;
 printf("请输入任一点的坐标(x,y):\n");
 scanf("(%f,%f)",&x,&y);
 if(x>=0 && y>=0)
 {d=pow(pow(x-2,2)+pow(y-2,2),0.5);
  if(d>=1)
  h=0;
  else
  h=10*(1-d);
 }
 if(x<0 && y<0)
 {d=pow(pow(x+2,2)+pow(y+2,2),0.5);
  if(d>=1)
  h=0;
  else
  h=10*(1-d);
 }
 if(x>0 && y<0)
 {d=pow(pow(x-2,2)+pow(y+2,2),0.5);
  if(d>=1)
  h=0;
  else
  h=10*(1-d);
 }
 if(x<0 && y>0)
 {d=pow(pow(x+2,2)+pow(y-2,2),0.5);
  if(d>=1)
  h=0;
  else
  h=10*(1-d);
 }
 printf("该点的建筑高度为%f\n",h);
 return 0;
}
