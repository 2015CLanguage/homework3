#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,f,i;
    printf("请输入："); 
	scanf("%d",&a);
    b=a;
    for(i=0;b!=0;i++){
    	b=b/10;
	}
	printf("这个数是%d位数\n",i);
	c=pow(10,i);
	for(i=1;a!=0;i++){
		f=a%10;
		d=a%c;
		a=a/10;
		c=c/10;
		printf("这个数的第%d位数是：%d\n",i,f);
		e=f*c+e;
	}
	printf("倒序后的%d位数是：%d",i,e);

	return 0;
}
