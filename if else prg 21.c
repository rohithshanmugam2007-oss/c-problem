#include<stdio.h>
int main()
{
    char i;
    scanf("%c",&i);
    int a,b;
    scanf("%d%d",&a,&b);
    switch (i){
    case '+':
     printf("Result = %d",a+b);
     break;
    case '-':
     printf(" Result =%d",a-b);
     break;
    case '*':
     printf("Result =%d",a*b);
     break;
    case '/':
     printf("Result =%d",a/b);
    break;
default:

    return 0;
}
}
