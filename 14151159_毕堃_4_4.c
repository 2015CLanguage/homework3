# include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("请输入三个整数\n（形如1,2,3）");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			d=a;}
		else
			d=b;}
	else
		if(c>b){
			d=c;}
		else
			d=b;
	printf("最大值是%d\n",d);
	return 0;
}
