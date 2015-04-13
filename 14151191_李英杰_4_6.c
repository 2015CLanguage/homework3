#include <stdio.h>
#include <stdlib.h>
int main(){
	double x,y;
	printf("请输入x的值：");
	scanf("%lf",&x);
	if (x<1)
	y=x;
	else if(x>=1&&x<10)
	y=2*x-1;
	else
	y=3*x-11;
	printf("y的值为：%lf\n",y);
	system("pause");
	return 0;
}
