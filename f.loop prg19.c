#include<stdio.h>
int main()
{
    int a,b,i,d=100;
    
    scanf("%d%d",&a,&b);
    for(i=1;i<=d;i++){
        if(i%a==0 && i%b==0){
            printf("%d",i);
            break;
        }
        
        
    }
       
        
    
  
  return 0;
}