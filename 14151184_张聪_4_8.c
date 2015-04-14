#include <stdio.h>
int main()
{
    double score;
    char grade;
    printf("请输入学生成绩：");
    scanf("%lf",&score);
    while(score>90||score<0)
      {
      printf("成绩输入错误，请重新输入");
      scanf("%lf",score);
      }
    switch((int)(score/10))
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
    printf("成绩等级是%c\n",grade);
    return 0;
}
