#include <stdio.h>   //xt4.6

int main()
{
	float x,y;
	printf("输入自变量x："); 
	scanf("%f",&x);
	if(x<10){
		if(x<1) y=x;else(y=2*x-1);
	}
	else{y=3*x-11;
	};
	printf("函数值为：%.2f",y);
	return 0;
 } 
