#include<stdio.h>
int main()
{
   int a,b,d=0,c=0;
  
   scanf("%d",&a);
   int count=0;
   for(int i=1;i<=a;i++){
       scanf("%d",&b);
      
       if(b>c){
           c=b;
           
           }
           if(b>70)
           count++;
          
       }
      
   
   printf("Maximum Noise:%d\n",c);
   printf("Noisy Periods:%d",count);
    
    return 0;
}