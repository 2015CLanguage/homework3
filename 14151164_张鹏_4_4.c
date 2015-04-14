#include<stdio.h>
int main()
{ 
	float a,b,c,d;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a<b){
	   d=a;
	   a=b;
	   b=d;
	}
	if(a<c){
	   d=a;
	   a=c;
	   c=d;
	}
	  printf("%5.2f\n",a);
	  return 0;
}
