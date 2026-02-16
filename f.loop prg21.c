#include<stdio.h>
#include<math.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
   
    for(int i=0;a!=0;a=a/10){
        if (a%10!=0)
            b+=pow(2,i);
           i++; 
        }
        printf("%d",b);
        return 0;
    }
    
    
