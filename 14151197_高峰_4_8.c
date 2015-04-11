#include <stdio.h>
int main(){
    int a,b;
    printf("请输入成绩：",a);
    scanf("%d",&a);
	b=a/10;
    printf("您的成绩等级是：");
	switch(b){
    	case 10:;
    	case 9:printf("A");break;
    	case 8:printf("B");break;
    	case 7:printf("C");break;
    	case 6:printf("D");break;
    	case 5:
    	case 4:
    	case 3:
    	case 2:
    	case 1:
    	case 0:printf("E");break;
	}
	return 0;
}
