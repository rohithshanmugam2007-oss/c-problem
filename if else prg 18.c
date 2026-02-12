#include<stdio.h>
int main()
{
    int units,x,y,z;
    scanf("%d", &units);
    if(units<50){
        x=units*0;
        printf("bill amount = Rs.0");
    
     else if(units>50 && units<100){
       y=units*3;
       printf("bill amount = Rs.%d",y);
   }
   else if (units>100 && units<500){
       z=units*5;
       printf("bill amount = Rs.%d",z);
   }
  
    return 0;

}
