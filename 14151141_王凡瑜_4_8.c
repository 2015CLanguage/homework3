#include<stdio.h>
void main()
{
    int score;
	char level;
	printf("Please input the score\n");
	scanf("%d",&score);
	if(score>=90)
		level='A';
	if(score>=80 && score<=89)
		level='B';
	if(score>=70 && score<=79)
		level='C';
	if(score>=60 && score<=69)
		level='D';
	if(score<60)
		level='E';
	printf("Your grade level is %c\n",level);
}
