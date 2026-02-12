#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a<0 || a>100){
        printf("Invalid input");
    }
   else if(a>=90){
        printf("Grade A");
    }
    else if(a>=75){
        printf("Grade B");
    }
    else {
        printf("Grade C");
    }
    return 0;
}