 #include <stdio.h>   //xt4.4
 
 int main()
 {
     int a,b,c,t,s; 
	 printf("输入三个整数，以_英文_逗号隔开。\n");
     scanf("%d,%d,%d",&a,&b,&c);
     
     if(a>=b) t=a;else t=b;
     if(t>=c) s=t;else s=c;
     printf("三数中最大数为：%d",s);
     return 0;
}
 
