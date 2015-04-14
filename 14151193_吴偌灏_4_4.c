#include<stdio.h>
int main()
{
    int a,b,c;
	  scanf("%d%d%d",&a,&b,&c);
	  if(a<b) a=b;
	  if(a<c) a=c;
	  else a=a;
	  printf("这其中最大的数为%d\n",a);
    return 0;
}
