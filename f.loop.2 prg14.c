#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        c=c+b;
        if(b>50000){
            count++;
        }
    }
        printf("Total Revenue:%d\n",c);
        printf("Total Days:%d",count);
    
    return 0;
}