Enter file contents here
#include<stdio.h>
 int main() 
{ 
 	int a,b,c,d; 
	printf("输入三个整数，并用逗号隔开\n"); 
	scanf("%d,%d,%d",&a,&b,&c); 
	if(a>b) 
		d=a;  	
	else d=b; 
 	if(c>d) 
 		d=c; 
   printf("max=%d\n",d); 
 } 
