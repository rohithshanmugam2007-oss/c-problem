#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>=65 && a<=90 ){
        printf("Upper case");
    }
   else if(a>=97 && a<=122){
        printf("lower case");
    }
    else {
        printf("invalid input");
    }

    return 0;
}