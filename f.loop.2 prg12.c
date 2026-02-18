#include<stdio.h>
int main()
{
   int a,b,c=0,d=0;
  
   scanf("%d",&a);
   int count=0;
   for(int i=1;i<=a;i++){
       scanf("%d",&b);
      
       if(b>c){
           c=b;
           
           }
           if(b>100)
           count++;
          
       }
      
   
   printf("Highest Price::%d\n",c);
   printf("High Price Days:%d",count);
    
    return 0;
}