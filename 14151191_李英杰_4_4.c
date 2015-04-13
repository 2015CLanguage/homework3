#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	printf("请输入三个整数：");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		a=b;
	}
	if(a<c){
		a=c;
	}
	printf("最大的数是：%d\n",a);
	system("pause");
    return 0;
}
