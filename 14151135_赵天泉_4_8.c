#include <stdio.h>
int main()
{
	float score;
	printf("请输入分数:",score);
	scanf("%f",&score);
	
    if (score<60.0)
	  printf("你的成绩为：%.1f，等级为E\n",score);

	else 
		if (60.0<=score&&score<70.0)
	  printf("你的成绩为：%.1f，等级为D\n",score);
	else 
		if (70.0<=score&&score<80.0)
	  printf("你的成绩为：%.1f，等级为C\n",score);
	else 
		if (80.0<=score&&score<90.0)
	  printf("你的成绩为：%.1f，等级为B\n",score);
	else 
		if (90.0<=score&&score<=100.0)
	  printf("你的成绩为：%.1f，等级为A\n",score);
	else 
		printf("输入错误\n");
	return 0;

}
