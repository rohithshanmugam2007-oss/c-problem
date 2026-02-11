#include<stdio.h>
  int main()
  {
      int a;
      scanf("%d",&a);
      if(a>100 && a<1000){
          printf("Three Digit Number");
      }
      else{
          printf(" Not an Three digit number");
      }
      return 0;
  }