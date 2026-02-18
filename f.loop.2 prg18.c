#include<stdio.h>
int main()
{
    int a,b,c=0,d=1;
      int count=0;
    scanf("%d",&a);
   
    for(int i=1;i<=a;i++){
       
        scanf("%d",&b);
      c=c+b;
        if(b>3){
            count++;
        }
    }
    d=c*200;
        printf("Total Overtime Hours:%d\n",c);
        printf("Overtime Cost:%d\n",d);
        printf("Heavy Overtime Days:%d",count);
    
    return 0;
}