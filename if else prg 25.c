#include<stdio.h>
int main()
{
    int c,a,b;
    scanf("%d%d%d",&c,&a,&b);
    switch (c){
    case 1:
     printf("Result = %d",a+b);
     break;
    case 2:
     printf(" Result =%d",a-b);
     break;
    case 3:
     printf("Result =%d",a*b);
     break;
    case 4:
     printf("Result =%d",a/b);
    break;
    default:
    printf("Enter valid symbol");
    return 0;
}
}