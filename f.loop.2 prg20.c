#include<stdio.h>
int main()
{
     int a,b,c,d=0;
     int count=0;
     scanf("%d%d",&a,&b);
     for(int i=0;i<b;i++){
         scanf("%d",&c);
         d=d+c;
         if(d<a){
             count++;
         }
         
     }
     printf("Remaining Data:%d\n",a-d);
     printf("Successful Days:%d",count);
     return 0;
}