# include<stdio.h>
int main()
{
float x,y;
x=0;
y=0;
printf("请输入一个自变量值x");
scanf("%f",&x);
if(x<1){
	y=x;}
else if(1<=x&&x<10){
	y=2*x-1;}
     else
		 y=3*x-11;
printf("函数值为%f\n",y);
return 0;

}
