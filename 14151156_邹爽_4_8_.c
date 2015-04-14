#include <stdio.h>
int main()
{
   int x;
   char grade,A,B,C,D,E;
   scanf("%d",&x);
   switch(x/10)
   {
   case 10: grade='A';break;
   case 9: grade='A';break;
   case 8: grade='B';break;
   case 7: grade='C';break;
   case 6: grade='D';break;
   default:grade='E';
   }
   printf("%c\n",grade);
return 0;
}
