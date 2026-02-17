#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    int count=0;
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        c=c+b;
        if(b>100){
            count++;
        }
    
    }
    printf("Total Loss=%d\n",c);
    printf("High Loss Days:%d",count);
    return 0;
}