#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;n>0;n=n/10){
        printf("%d",n%10);
    }    
    return 0;

}