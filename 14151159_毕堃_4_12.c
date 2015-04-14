# include<stdio.h>
int main()
{
float x,y;
printf("请输入一个坐标（形如(1,2)）");
scanf("(%f,%f)",&x,&y);
if((x-2)*(x-2)+(y-2)*(y-2)<=1||(x-2)*(x-2)+(y+2)*(y+2)<=1||(x+2)*(x+2)+(y-2)*(y-2)<=1||(x+2)*(x+2)+(y+2)*(y+2)<=1){
	printf("该点建筑物高度为10米\n");}
else printf("该点建筑物高度为0\n");
return 0;
}
