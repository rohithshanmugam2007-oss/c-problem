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
           if(b>140)
           count++;
          
       }
      
   
   printf("Max Heart Rate:%d\n",c);
   printf("Danger Readings:%d",count);
    
    return 0;
}