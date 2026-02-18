#include<stdio.h>
#include <limits.h> 
int main()
{
   int a,b,d=0;
  int c=INT_MAX;
    int count=0;

   scanf("%d",&a);
   for(int i=0;i<a;i++){
       scanf("%d",&b);
      
       if(b<c){
           c=b;
           
           }
           if(b<210){
           count++;
          
       }
   }
   
   printf("Minimum Voltage:%d\n",c);
   printf("Low voltage events:%d",count);
    
    return 0;
}