void func(int a,int *store){
    *store=a*10;
}
    


#include<stdio.h>
int main() {
    int i=10,store;
    func(i,&store);  
    printf("%d",store);



return 0;
}



   






