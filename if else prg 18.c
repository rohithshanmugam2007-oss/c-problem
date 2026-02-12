#include<stdio.h>
int main()
{
    int units,y,z;
    scanf("%d", &units);
    
     if(units>50 && units<100){
       y=units*3;
       printf("bill amount = Rs.%d",y);
   }
   else if (units>100 && units<500){
       z=units*5;
       printf("bill amount = Rs.%d",z);
   }
  
    return 0;
}