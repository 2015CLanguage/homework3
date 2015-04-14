#include<stdio.h>
void main()
{
	float score;
	char grade;
	printf("请输入分数:\n");         //输入分数
	scanf("%f",&score);
	printf("你的等级为:\n")
	while(score>100&&score<0)        //判断分数是否合法
	{
		printf("输入有误，请重新输入\n");
		scanf("%f",&score);
	}
	int a=score/10;
	switch(score)                  //用switch进行分类
	{
		case 10:
		case 9:grade='A';break;
		case 8:grade='B';break;
		case 7:grade='C';break;
		case 6:grade='D';break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:grade='E';break;
	}
	printf("%c\n",score);			          //输出结果
}
