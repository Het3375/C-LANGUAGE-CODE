#include<stdio.h>
void func(char *st ,int m,int n)
{
    
    int i=0;
    while (i<n)
    {
       st[i]=st[i+m];
           
      i++;
    }
    st[i]='\0';
}
int main() {
    char str[]="hetisking";
    func(str,1,4);
    printf("%s",str);



return 0;
}