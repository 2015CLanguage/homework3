 #include "stdio.h" 
 
 
 int main() 
 { 
 	int g; 
 	printf("请输入成绩（百分制）：\n"); 
 	scanf("%d",&g); 
 	while(g>100||g<0) 
        { 
		printf("ERROR!\n请重新输入成绩（百分制）：\n"); 
		scanf("%d",&g); 
	} 
	printf("成绩等级为："); 
	if(g>=90) 
		printf("A\n"); 
	else if(g>=80&&g<90) 
		printf("B\n"); 
	else if(g>=70&&g<80) 
		printf("C\n"); 
	else if(g>=60&&g<70) 
		printf("D\n"); 
	else 
		printf("E\n"); 
	return 0; 
} 
