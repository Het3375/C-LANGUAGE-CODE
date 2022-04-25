#include<stdio.h>


int main() {
 char st1[34];
 char st2[45];
 char c;
 int i=0;
 printf("print the first string \n");
 scanf("%s",&st1);
 printf("your charater by charater value is \n");

 while (c!='\n')
 {
     fflush(stdin);
     scanf("%c",&c);
     st2[i]=c;
     i++;
 }
//  st2[i]='\0';

 printf("your first string is %s\n",st1);
 printf("your secound string is %s\n",st2);


 
 

return 0;
}