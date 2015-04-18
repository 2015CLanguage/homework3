#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b){ 
		if(b<c)
			printf("最大数为:%d\n",c);
		else
			printf("最大数为:%d\n",b);
			
	    } 
	else{ if(a<c)
             printf("最大数为:%d\n",c);
	     else
		     printf("最大数为:%d\n",a);
		} 
	return 0;
} 
