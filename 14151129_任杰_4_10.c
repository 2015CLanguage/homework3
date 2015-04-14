#include<stdio.h>
void main()
{
	int a1,a2,a3,a4,a5;
	a1=100000*0.1;
	a2=a1+100000*0.075;
	a3=a2+200000*0.05;
	a4=a3+200000*0.03;
	a5=a4+400000*0.015;
	int lirun;
	float jiangjin;
	scanf("%d",&lirun);
	int b;
	if(lirun>1000000)
		b=10;
	else
		b=lirun/100000;
	switch(b)
	{
		case 0: jiangjin=lirun*0.1;break;
		case 1: jiangjin=(lirun-100000)*0.075+a1;break;
		case 2: 
		case 3: jiangjin=(lirun-200000)*0.05+a2;break;
		case 4: 
		case 5: jiangjin=(lirun-400000)*0.03+a3;break;
		case 6: 
		case 7: 
		case 8: 
		case 9: jiangjin=(lirun-600000)*0.03+a4;break;
		case 10: jiangjin=(lirun-1000000)*0.015+a5;break;
	}
	printf("奖金为%.2f\n",jiangjin);
}
