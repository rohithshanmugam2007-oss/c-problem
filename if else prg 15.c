#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(a+b+c==180){
        printf("Valid Trianagle");
    }
   else {
        printf("Not an valid triangle");
   }
    return 0;
}