#include<stdio.h>
int main()
{
    int n,b,c=0;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        b=n%10;
        
       c=c+b;
        
       
    }
    
    printf("%d",c);

return 0;
}