#include<stdio.h>
int main() {

      int user;
    printf("so you want to play again y/n \n");
    scanf("%d",&user);
    int total=10;
    do
    {
       total=total-1;
       printf("your total is %d\n",total);

       if (user==1)
       {
           printf("play again\n");
          
       }
       else
       {
           break;
       }
       

       
    } while (total>1);
    


return 0;
}

  
    
    



 