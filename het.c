#include <stdio.h>
int main()
{
    printf("make sure.. your value of digit is four\n");
    int num1, num2, num3, num4;
    printf("print the num1\n");
    scanf("%d", &num1);

    printf("print the num2\n");
    scanf("%d", &num2);

    printf("print the num3\n");
    scanf("%d", &num3);

    printf("print the num4\n");
    scanf("%d", &num4);

    char user;


    




    

    // int total=(num1+num2+num3+num4)/4;
    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("num1 is bigger then num2 %d\n", num1);
    }

    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("num1 is bigger then num2 %d\n", num2);
    }

    else if ((num3 > num2) && (num3 > num4) && (num3 > num1))
    {
        printf("num1 is bigger then num3 %d\n", num3);
    }

    else if ((num4 > num2) && (num4 > num3) && (num4 > num1))
    {
        printf("num1 is bigger then num4 %d\n", num4);
    }
    
    else
    {
         printf("please print again may be... two values are same and if its same so you should to play again..\n");
        
         
         
    }
    


   
return 0;
}