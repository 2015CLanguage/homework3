#include <stdio.h>
void main()
{
	int x,a,b,c,d,e,y;
	printf("请输入一个小于五位的正整数");
	scanf("%d",&x);
	if (x>9999){
		printf("位数为5");
	    a=int(x/10000);
		b=int(x/1000)-a*10;
		c=int(x/100)-a*100-b*10;
		d=int(x/10)-a*1000-b*100-c*10;
		e=x-a*10000-b*1000-c*100-d*10;
		y=e*10000+d*1000+c*100+b*10+a;
		printf("各位数字为%d,%d,%d,%d,%d",a,b,c,d,e);
		printf("逆序数为%d",y);
	}
	else if (x>999 && x<10000) {
        printf("位数为4");
	
	    a=int(x/1000);
		b=int(x/100)-a*10;
		c=int(x/10)-a*100-b*10;
		d=int(x/10)-a*1000-b*100-c*10;
		
		y=d*1000+c*100+b*10+a;
		printf("各位数字为%d,%d,%d,%d",a,b,c,d);
		printf("逆序数为%d",y);
	}
	else if (x>99 && x<1000){
		printf("位数为3");

	    a=int(x/100);
		b=int(x/10)-a*10;
		c=int(x/1)-a*100-b*10;
		
		y=c*100+b*10+a;
		printf("各位数字为%d,%d,%d",a,b,c);
		printf("逆序数为%d",y);
	}
	else if (x>9 && x<100){
	    printf("位数为2");

	    a=int(x/10);
		b=int(x/1)-a*10;
		
		y=b*10+a;
		printf("各位数字为%d,%d",a,b);
		printf("逆序数为%d",y);
	}
	else{
		printf("位数为1");

	    a=int(x/1);
		
		y=a;
		printf("各位数字为%d",a);
		printf("逆序数为%d",y);
	}
}
