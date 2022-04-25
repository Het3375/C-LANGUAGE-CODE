#include<stdio.h>
int main() {

    int arr[10];
     int arr2;
        printf("print any number \n");
        scanf("%d",&arr2);
    for (int i = 0; i <10; i++)
    {
       
        arr[i]=arr2*(i+1);
       
    }

    for (int i = 0; i <10; i++)
    {
       printf("%dX%d=%d\n",arr2,i+1,arr[i]);
       
    }
    
    

return 0;
}
