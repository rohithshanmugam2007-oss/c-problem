#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&b);
       c=c+b;
    }
    if(c<10000){
        printf("Approved");
    }
    
    else{
    printf("Limit exceeded");
    }
    return 0;
}