#include<stdio.h>
// int main() {

//     for (char i = 10; i >1; i--)
//     {
        
        
//        for (int b= 20; b>i; )
//        {
           
//            printf("%c\n",b-1,'*');
           
//        }



       
//     }
    

// return 0;
// }


// #include<stdio.h>
// int main() {
//     for (char i = 4; i>1; i--)
//     {
//         if (i==1)
//         {
//               return 1;
//         }
//         else{
            
//               i*(i-1);
//               printf("%c\n",'*'); 
            
//              }
//     }
    

// return 0;
// }


float func(int a,int b, int c);

#include<stdio.h>
int main() {
    float user1;
    printf("print the value \n");
    scanf("%f",&user1);

    float user2;
    printf("print the value \n");
    scanf("%f",&user2);


    float user3;
    printf("print the value \n");
    scanf("%f",&user3);
    
   float total;
    total=func(user1,user2,user3);
    printf("your total is \n %f",total);

return 0;
}


float func(int a,int b, int c){
    int avarage;
    avarage=(a+b+c)/3.0;
    return avarage;
}
