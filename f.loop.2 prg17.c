#include<stdio.h>
int main()
{
    int a,b,c=0;
      int count=0;
    scanf("%d",&a);
   
    for(int i=1;i<=a;i++){
       
        scanf("%d",&b);
        c=c+b;
       
        
         
        if(b>30){
            count++;
        }
    }
        printf("Total Delay:%d\n",c);
        printf("Delayed Deliveries:%d",count);
    
    return 0;
}