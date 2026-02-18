#include<stdio.h>
int main()
{
    int a,b,c=0,d;
      int count=0;
    scanf("%d\n%d",&a,&b);
   
    for(int i=1;i<=b;i++){
       
        scanf("%d",&d);
        
         a=a-d;
        if(a<=5000){
            count++;
        }
    }
        printf("Remaining Cash:%d\n",a);
        printf("Risk Count:%d",count);
    
    return 0;
}