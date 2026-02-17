#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        c=c+b;
        if(b>2){
            count++;
        }
    
    }
    
    printf("Total Data=%d\n",c);
    printf("High Usage Days:%d",count);
    return 0;
}