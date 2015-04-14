#include"stdio.h"
int main()
{
	int a,b,c,t;
	printf("pleace input three numbers\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	
	if(a<b) 
	b=a;
	
	if(a<c)
	a=c;
	
	printf("The largest number is %d.",a);
} 
