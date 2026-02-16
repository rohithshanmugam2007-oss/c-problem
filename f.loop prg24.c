#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
   int temp=a;
   int c=0,b;
    for(int i=1;a!=0;){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(temp== c){
        printf("Palindrome");
    }
   else
        printf("Not palindrome");
    
    
    return 0;
}