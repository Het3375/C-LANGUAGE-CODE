#include <stdio.h>
void func1(int *arr, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr>0)
        {
        
            printf("%d",arr);
        }

        else{
            break;
        }
       
    }

}
int main()
{

    int arr[]={2,3,4,5,6,-1,-2,-3,-4,-5};
    func1(arr,10);
  
   
    

   
  
    




    return 0;
}