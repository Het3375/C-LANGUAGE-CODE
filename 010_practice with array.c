
#include<stdio.h>
void reverce(int *num,int n){
    for (int i = 0; i <n/2; i++)
    {
        int temp=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=temp;
    }
    
    
   
    
}
int main() {
    int arr[]={1,2,3,4,5,6};
    reverce(arr,6);
    for (int i = 0; i < 6; i++)
    {
        printf("your arr is %d is: %d\n ",i,arr[i]);
    }
    


return 0;
}